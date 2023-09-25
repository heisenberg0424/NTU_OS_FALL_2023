# OS HW 1

## Part 1

通過執行程式可以發現同時執行兩個程式會讓 PrintINT 亂跳，所以初步判斷是兩個程式使用到同一塊記憶體。原先以為要實做虛擬記憶體，但把兩個程式所需的 PageSize 給印出來以後就能發現其實兩個程式所需的實體記憶體 Page 不會超過OS內的實體 Page 數量 (NumPhysPages = 32)，所以我們需要做的只是讓兩個 thread 不會使用到彼此的 PhysPage。

### Step 1

設定一個 bool arr 來追蹤 Phys page 是否已被使用，用 static 讓 class 間共享這個 arr

**addrspace.h**

```cpp
class AddrSpace {
  public:
    ...

  private:
    static bool usedPhysicalPage[NumPhysPages];
    ...
};
```

**addrspace.cc**

```cpp
bool AddrSpace::usedPhysicalPage[NumPhysPages] = {0}; //init arr
```

### Step 2

現在 PageTable 內的 physicalPage 將由我們分配，所以初始化 PageTable 要把 physicalPage 和 valid 設為 0

**addrspace.cc**

```cpp
AddrSpace::AddrSpace()
{
    pageTable = new TranslationEntry[NumPhysPages];
    for (unsigned int i = 0; i < NumPhysPages; i++) {
        pageTable[i].virtualPage = i;	
        //pageTable[i].physicalPage = i;
	    	pageTable[i].physicalPage = 0;
        //pageTable[i].valid = TRUE;
	    	pageTable[i].valid = FALSE;
        pageTable[i].use = FALSE;
        pageTable[i].dirty = FALSE;
        pageTable[i].readOnly = FALSE;  
    }
}
```

### Step 3

我們在把程式 load 進 memory 時，要把程式所需的 Phys Pages 給它，並且注意要是未使用過的 Page 。最後翻譯 Phys Page 的記憶體位置並填入 ReadAt 中的 mainMemory。

 

```cpp
bool AddrSpace::Load(char *fileName) 
{
	  ...
		numPages = divRoundUp(size, PageSize);
		cout << "number of pages of " << fileName<< " is "<<numPages<<endl;
	
	  for(unsigned int i=0;i<numPages;i++){  //allocate numPages Virtual pages
	      unsigned int j;
	      for( j=0;j<NumPhysPages;j++){  //find unused Physical pages
	          if( !usedPhysicalPage[j] ){
	              usedPhysicalPage[j] = TRUE;
	              break;
	          }
	      }
	      ASSERT(j<NumPhysPages);
				
	      pageTable[i].physicalPage = j;
	    	pageTable[i].valid = TRUE;
    }
	
		...

		// then, copy in the code and data segments into memory
		if (noffH.code.size > 0) {
	      DEBUG(dbgAddr, "Initializing code segment.");
		    DEBUG(dbgAddr, noffH.code.virtualAddr << ", " << noffH.code.size);
	      executable->ReadAt(
	          &(kernel->machine->mainMemory[pageTable[noffH.code.virtualAddr/PageSize].physicalPage*PageSize + (noffH.code.virtualAddr%PageSize)]), 
	          noffH.code.size, noffH.code.inFileAddr);
	  }
		if (noffH.initData.size > 0) {
	      DEBUG(dbgAddr, "Initializing data segment.");
		    DEBUG(dbgAddr, noffH.initData.virtualAddr << ", " << noffH.initData.size);
	      executable->ReadAt(
			    &(kernel->machine->mainMemory[pageTable[noffH.initData.virtualAddr/PageSize].physicalPage*PageSize + (noffH.initData.virtualAddr%PageSize)]),
				  noffH.initData.size, noffH.initData.inFileAddr);
	  }

		...
}
```

## Part 2

### Syscall SC_Halt Code Trace

我先用 -d ma 兩個 debug flag 執行，方便我們看到 machine 跟 exception 相關的資訊。

從 debug message 可以看出程式執行流程為：

Machine::Run → Machine::OneInstruction → RaiseException → ExceptionHandler

**Machine::Run**

模擬 MIPS R2/3000 處理器執行程式

**Machine::OneInstruction**

到這裡會 Raise Syscall Exception

**RaiseException**

遇到 exception，轉成 kernel mode

**ExceptionHandler**

對不同的 Exception 做出不同的動作，這邊會進到 SC_Halt，然後執行 Interrupt::Halt() 把 kernel 刪除

**程式結束**