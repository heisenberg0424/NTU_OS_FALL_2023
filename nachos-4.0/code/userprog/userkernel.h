// userkernel.h
//	Global variables for the Nachos kernel, for the assignment
//	supporting running user programs.
//
//	The kernel supporting user programs is a version of the
//	basic multithreaded kernel.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#ifndef USERKERNEL_H
#define USERKERNEL_H

#include "kernel.h"
#include "filesys.h"
#include "machine.h"
#include "synchdisk.h"
class SynchDisk;
class VirtualMemory;
class UserProgKernel : public ThreadedKernel
{
public:
    UserProgKernel(int argc, char **argv);
    // Interpret command line arguments
    ~UserProgKernel();  // deallocate the kernel

    void Initialize();  // initialize the kernel

    void Run();  // do kernel stuff

    void SelfTest();  // test whether kernel is working

    // These are public for notational convenience.
    Machine *machine;
    FileSystem *fileSystem;
    VirtualMemory *virtualMemory;

#ifdef FILESYS
    SynchDisk *synchDisk;
#endif  // FILESYS

private:
    bool debugUserProg;  // single step user program
    Thread *t[10];
    char *execfile[10];
    int execfileNum;
};

class VirtualMemory
{
public:
    VirtualMemory();
    int getVmPageNum();
    void trackPhyPage(int phyPageNum, TranslationEntry *entry);
    void write2Disk(int sector, char *data);
    void swapPage(int vpn, int algo);

private:
    // Tracks the virtual page that uses physical page
    TranslationEntry *phy2virPage[NumPhysPages];
    SynchDisk *swap;
    bool vmPages[1024];  // 1024 = NumSector
    int fifo;
};


#endif  // USERKERNEL_H
