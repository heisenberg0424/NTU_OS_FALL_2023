# Project 3
## Part 1
### What is your motivation, problem analysis and plan ?
由於這次跑得 code 會耗費大量記憶體，所以不像是 HW1 時可以把程式都放進 memory 裡，需要設計虛擬記憶體(Virtual Memory)的機制，所以我打算先看我 HW1 對 PageTable 的實做並照著助教的提示完成作業。
### Explain the details of code snippet you added or modified.
首先讓 PageTable 讀到 invalid page 時會跳 PageFault 的 Exception，然後讓讀取的 Page cnt++，之後用 LRU Replacement 會用到。

**machine/translate.cc**
```cpp
ExceptionType Machine::Translate(int virtAddr,
                                 int *physAddr,
                                 int size,
                                 bool writing)
{
    ...
    if (tlb == NULL) {  // => page table => vpn is index into table
        if (vpn >= pageTableSize) {
            DEBUG(dbgAddr, "Illegal virtual page # " << virtAddr);
            return AddressErrorException;
        } else if (!pageTable[vpn].valid) {
            DEBUG(dbgAddr, "Invalid virtual page # " << virtAddr);
            return PageFaultException;
        }
        pageTable[vpn].cnt++;
        entry = &pageTable[vpn];
    }
    ...
}
```
由於在 HW1 中，我們將 PageTable 建立在 addrspace 內，因此當需要將其他 process 的 Page swap 至硬碟時，我們需要將其 valid 位設置為 0，表示該頁面不再位於記憶體中了。  

所以在 machine/machine.h 中加入 phy2virPage ，用於追蹤實體 Page，還有 sectorIsUsed 用來紀錄哪些 sector 已有資料。  

此外，用於 FIFO 的計數器也將放在這裡。
```cpp
class Machine
{
    ...
    public:
    // Tracks the virtual page that uses physical page
    TranslationEntry *phy2virPage[NumPhysPages];
    // See if Disk sector is used
    bool sectorIsUsed[1024];  // 1024 = NumSector
    int fifo;
    ...
}
```
**machine/machine.cc**
```cpp
Machine::Machine(bool debug)
{
    // init public members
    memset(phy2virPage, 0, NumPhysPages);
    memset(sectorIsUsed, 0, 1024);
    fifo = 0;
    ...
}
```
當遇到 PageFault 時，我們需要將 PhyPage swap 進 disk sector，因此必須在 PageTable 中加入 sector 的相關資訊。  
同時，用於 LRU 的 Page counter 也會在這裡加入。  

**machine/translate.h**
```cpp
class TranslationEntry
{
public:
    ...
    // Disk sector that virtual memory is stored
    unsigned int sector;
    // Tracks frequency that page is used
    unsigned int cnt;
};
```
在 kernel 加入 SynchDisk 當作 Virtual Memory  

**userprog/userkernel.h**
```cpp
class UserProgKernel : public ThreadedKernel
{
public:
    ...
    Machine *machine;
    FileSystem *fileSystem;
    SynchDisk *virtualMem;
    ...
}
```
**userprog/addrspace.cc**
```cpp
void UserProgKernel::Initialize()
{
    ...
    virtualMem = new SynchDisk("Virtual Memory");
    ...
}
```
再來就是修改 addrspace 中把 code load 進記憶體的部份  

**userprog/addrspace.h**  

用 pageTable_loaded 紀錄 pageTable 是否 Load 完成，防止 AddrSpace::SaveState() 把 addrspace 內資料覆蓋掉
```cpp
class AddrSpace{
    ...
private:
    bool pageTable_loaded;
    ...
};
```
**userprog/addrspace.cc**
透過使用 gdb，發現 noffH.initData.size 的值都為 0，因此這次作業只需要處理 noffH.code。解決方式大致上是，如果 phyPage 仍然足夠，則採取與之前作業相同的處理方式。但如果 phyPage 不足，則將資料寫入 Disk，再將存儲的 disk sector 存放到 Page 資訊中，同時將 valid 設置為 false。這樣在程式執行時，讀取這些頁面將引發 PageFaultException
```cpp
bool AddrSpace::Load(char *fileName)
{
    OpenFile *executable = kernel->fileSystem->Open(fileName);
    NoffHeader noffH;
    unsigned int size;

    if (executable == NULL) {
        cerr << "Unable to open file " << fileName << "\n";
        return FALSE;
    }
    executable->ReadAt((char *) &noffH, sizeof(noffH), 0);
    if ((noffH.noffMagic != NOFFMAGIC) && (WordToHost(noffH.noffMagic) == NOFFMAGIC))
        SwapHeader(&noffH);
    ASSERT(noffH.noffMagic == NOFFMAGIC);

    // how big is address space?
    size = noffH.code.size + noffH.initData.size + noffH.uninitData.size + UserStackSize;  // we need to increase the size
                                                                                           // to leave room for the stack
    numPages = divRoundUp(size, PageSize);
    // cout << "number of pages of " << fileName<< " is "<<numPages<<endl;

    pageTable = new TranslationEntry[numPages];


    for (unsigned int i = 0; i < numPages; i++) {
        pageTable[i].virtualPage = i;  // for now, virt page # = phys page #
                                       // pageTable[i].physicalPage = i;
        pageTable[i].physicalPage = 0;
        // pageTable[i].valid = TRUE;
        pageTable[i].valid = FALSE;
        pageTable[i].use = FALSE;
        pageTable[i].dirty = FALSE;
        pageTable[i].readOnly = FALSE;
        pageTable[i].sector = 0;
        pageTable[i].cnt = 0;
    }

    size = numPages * PageSize;

    DEBUG(dbgAddr, "Initializing address space: " << numPages << ", " << size);

    // then, copy in the code and data segments into memory

    if (noffH.code.size > 0) {
        for (unsigned int i = 0; i < numPages; i++) {  // allocate numPages Virtual pages
            unsigned int j;
            for (j = 0; j < NumPhysPages; j++) {  // find unused Physical pages
                if (!usedPhysicalPage[j]) {
                    break;
                }
            }

            if (j < NumPhysPages) {  // if there is unused Physical pages
                DEBUG(dbgAddr, "Phy page found: " << i);
                usedPhysicalPage[j] = true;
                pageTable[i].physicalPage = j;
                pageTable[i].valid = TRUE;
                kernel->machine->phy2virPage[j] = &pageTable[i];  // track phy page

                executable->ReadAt(&(kernel->machine->mainMemory[j * PageSize]), PageSize, noffH.code.inFileAddr + (i * PageSize));
            } else {  // write in disk
                DEBUG(dbgAddr, "No enough physical pages for page " << i);
                char *buffer;
                buffer = new char[PageSize];

                // Find empty sector
                int sec;
                for (sec = 0; sec < 1024; sec++) {
                    if (kernel->machine->sectorIsUsed[sec] == 0)
                        break;
                }

                pageTable[i].valid = FALSE;
                pageTable[i].sector = sec;
                kernel->machine->sectorIsUsed[sec] = 1;
                executable->ReadAt(buffer, PageSize, noffH.code.inFileAddr + (i * PageSize));
                kernel->virtualMem->WriteSector(sec, buffer);

                delete[] buffer;
            }
        }
    }
    if (noffH.initData.size > 0) {
        DEBUG(dbgAddr, "Initializing data segment.");
        DEBUG(dbgAddr, noffH.initData.virtualAddr << ", " << noffH.initData.size);
        executable->ReadAt(&(kernel->machine->mainMemory[pageTable[noffH.initData.virtualAddr / PageSize].physicalPage * PageSize + (noffH.initData.virtualAddr % PageSize)]), noffH.initData.size,
                           noffH.initData.inFileAddr);
    }

    delete executable;  // close file
    return TRUE;        // success
}

void AddrSpace::SaveState()
{
    if (pageTable_loaded) {
        pageTable = kernel->machine->pageTable;
        numPages = kernel->machine->pageTableSize;
    }
}
```
最終要處理的是當遇到 PageFault 時的 ExceptionHandler。首先是要選擇被 swap out 的 Page，對於 FIFO 來說，最簡單的方式是每次選擇 fifo++ 的頁面即可。至於 LRU，則需要對每個具有 Phypage 的 Page 進行檢查，找出最少被使用的 Page。  

一旦選擇好 target Page，就將其 swap 入硬碟，記錄相應的 disk sector，並將 valid 設置為 False。然後將 PageFault 的頁面讀入 Memory，分配 phyPage 並將 valid 設置為 True。  

同時，需要記得更新 phy2virPage。  

**userprog/exception.cc**
```cpp
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
            if (kernel->machine->phy2virPage[i]->cnt < min) {
                min = kernel->machine->phy2virPage[i]->cnt;
                target = i;
            }
        }

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
        ...
}
```
### Experiment result and some discussion, observation.
首先 sort.c 應該寫錯了，第 25 行 j 要從 0 開始而非 i，然後最小值 A[0] 應該為 1 而非 0
#### FIFO
matmult
![Screenshot from 2023-12-17 20-19-02](https://hackmd.io/_uploads/rkf2zdnLT.png =60%x)
sort
![Screenshot from 2023-12-17 20-20-05](https://hackmd.io/_uploads/rJD2fun86.png =60%x)
Running Both
![Screenshot from 2023-12-17 20-20-33](https://hackmd.io/_uploads/Bys3zdn8p.png =60%x)
#### LRU
Running Both
![Screenshot from 2023-12-17 21-12-33](https://hackmd.io/_uploads/ByKR7_2Ia.png =60%x)
從結果來看，LRU 的 PageFault 次數並未比 FIFO 低。然而，透過 debugger 觀察演算法並未發現問題。我認為問題可能出在某些 Page 在一開始被不斷取用，因此其計數 cnt 很高。但是在程式的後半部分，這些 Page 可能不再被使用，由於它們在前面被存取很多次，導致它們的 cnt 與後面即將使用的 Page 之間有很大的差距。這可能會導致這些程式後半才使用的 Page 不斷被 swap out，從而不斷引發 PageFault。

### What problem you face and how to tackle it?
在處理 addrspace.cc 的時候遇到了一個重要的問題。具體來說，當我在寫到 addrspace.cc 中的 Load() 函數時，想要測試在 phyPage 不足的情況下，能否成功將資料寫入硬碟。然而當我打開了 debug flag a 觀察時，發現 Load() 在儲存了 phyPage + 1 個頁面後就終止了。  
  
通過使用 gdb 進行逐步執行，我發現在執行完 WriteSector 後，Addrspace 中的數據都會消失。進一步觀察 WriteSector 函數，我發現它設置了計時器中斷，模擬讀取硬碟的時間。這讓我誤以為在 HW2 中，我將計時器的 CallBack() 寫錯了。但是當我回到 HW1 時的 commit，仍然發現了相同的問題。  

最終，我發現處理 timer interrupt 時 context switch 會執行 AddrSpace::SaveState()，這會導致機器中的空數據覆蓋我們正在寫入一半的 PageTable。解決這個問題的方法是在執行 Load 之前設置一個變數 pageTable_loaded，等到所有頁面都成功加載後再允許 SaveState 執行。