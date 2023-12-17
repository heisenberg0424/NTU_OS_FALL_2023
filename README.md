# Nachos

This project was build successfully in docker, ubuntu 16.04 32bit.  
Please flowing the instructions below.  
The report for each homework will be in the [Report](https://github.com/heisenberg0424/NTU_OS_FALL_2023/tree/main/Report) folder.

## Clone the repo to your directory
```
git clone https://github.com/heisenberg0424/NTU_OS_FALL_2023.git
```

## Build the container from Dockerfile
```
docker build . -t ubuntu32
```

## Run the container
THe code will be inside `/home` in docker
```
docker run --rm -ti -v /Your/Path/To/Nachos:/home 32test /bin/zsh
```

## Format the ugly code
Remember to check if `SortIncludes: false` in `.clang-format`
```
clang-format -style=file -i nachos-4.0/code/*/*.cc
clang-format -style=file -i nachos-4.0/code/*/*.h
```

## Add following line in Makefile 
**Makefile**
```Makefile
MAKE = make
LPR = lpr
.PHONY: all test clean

all:
	cp -r ../../usr /
	cd threads; $(MAKE) depend
	cd threads; $(MAKE) nachos
    ...
```

## Go to code folder and make
```
cd /home/nachos-4.0/code
make
```


## Run Nachos
```
cd userprog
user@user-VirtualBox:~/nachos/nachos-4.0/code/userprog$ ./nachos -e ../test/test1
Total threads number is 1
Thread ../test/test1 is executing.
Print integer:9
Print integer:8
Print integer:7
Print integer:6
return value:0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 200, idle 66, system 40, user 94
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```