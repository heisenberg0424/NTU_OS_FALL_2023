// exception.cc
//	Entry point into the Nachos kernel from user programs.
//	There are two kinds of things that can cause control to
//	transfer back to here from user code:
//
//	syscall -- The user code explicitly requests to call a procedure
//	in the Nachos kernel.  Right now, the only function we support is
//	"Halt".
//
//	exceptions -- The user code does something that the CPU can't handle.
//	For instance, accessing memory that doesn't exist, arithmetic errors,
//	etc.
//
//	Interrupts (which can also cause control to transfer from user
//	code into the Nachos kernel) are handled elsewhere.
//
// For now, this only handles the Halt() system call.
// Everything else core dumps.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "main.h"
#include "syscall.h"
#include "machine.h"

//----------------------------------------------------------------------
// ExceptionHandler
// 	Entry point into the Nachos kernel.  Called when a user program
//	is executing, and either does a syscall, or generates an addressing
//	or arithmetic exception.
//
// 	For system calls, the following is the calling convention:
//
// 	system call code -- r2
//		arg1 -- r4
//		arg2 -- r5
//		arg3 -- r6
//		arg4 -- r7
//
//	The result of the system call, if any, must be put back into r2.
//
// And don't forget to increment the pc before returning. (Or else you'll
// loop making the same system call forever!
//
//	"which" is the kind of exception.  The list of possible exceptions
//	are in machine.h.
//----------------------------------------------------------------------

void ExceptionHandler(ExceptionType which)
{
    int type = kernel->machine->ReadRegister(2);
    int val, vaddr, vpn, target, min;
    char *buf1;
    char *buf2;

    switch (which) {
    case PageFaultException:
        kernel->stats->numPageFaults++;
        vaddr = kernel->machine->ReadRegister(39);
        vpn = vaddr / PageSize;

        // FCFS
        target = kernel->machine->fifo;
        kernel->machine->fifo = (kernel->machine->fifo + 1) % NumPhysPages;

        // LRU
        target = 0;
        min = kernel->machine->phy2virPage[target]->cnt;
        for (int i = 1; i < NumPhysPages; i++) {
            cout << i << ": " << kernel->machine->phy2virPage[i]->cnt << ", ";
            if (kernel->machine->phy2virPage[i]->cnt < min) {
                min = kernel->machine->phy2virPage[i]->cnt;
                target = i;
            }
        }
        cout << endl << "Pick: " << target << endl;

        // Swap Memory and Disk
        buf1 = new char[PageSize];
        buf2 = new char[PageSize];
        memcpy(buf1, &kernel->machine->mainMemory[target * PageSize], PageSize);
        kernel->virtualMem->ReadSector(kernel->machine->pageTable[vpn].sector, buf2);
        memcpy(&kernel->machine->mainMemory[target * PageSize], buf2, PageSize);
        kernel->virtualMem->WriteSector(kernel->machine->pageTable[vpn].sector, buf1);

        kernel->machine->phy2virPage[target]->sector = kernel->machine->pageTable[vpn].sector;
        kernel->machine->phy2virPage[target]->valid = FALSE;

        kernel->machine->pageTable[vpn].valid = TRUE;
        kernel->machine->pageTable[vpn].physicalPage = target;
        kernel->machine->phy2virPage[target] = &kernel->machine->pageTable[vpn];

        delete[] buf1;
        delete[] buf2;

        return;
    case SyscallException:
        switch (type) {
        case SC_Sleep:
            // cout<<"Calling SC_Sleep"<<endl;
            val = kernel->machine->ReadRegister(4);
            kernel->alarm->WaitUntil(val);
            return;

        case SC_Halt:
            DEBUG(dbgAddr, "Shutdown, initiated by user program.\n");
            kernel->interrupt->Halt();
            break;
        case SC_PrintInt:
            val = kernel->machine->ReadRegister(4);
            cout << "Print integer:" << val << endl;
            return;
        /*		case SC_Exec:
                    DEBUG(dbgAddr, "Exec\n");
                    val = kernel->machine->ReadRegister(4);
                    kernel->StringCopy(tmpStr, retVal, 1024);
                    cout << "Exec: " << val << endl;
                    val = kernel->Exec(val);
                    kernel->machine->WriteRegister(2, val);
                    return;
        */
        case SC_Exit:
            DEBUG(dbgAddr, "Program exit\n");
            val = kernel->machine->ReadRegister(4);
            cout << "return value:" << val << endl;
            kernel->currentThread->Finish();
            break;
        default:
            cerr << "Unexpected system call " << type << "\n";
            break;
        }
        break;
    default:
        cerr << "Unexpected user mode exception " << which << "\n";
        break;
    }
    ASSERTNOTREACHED();
}
