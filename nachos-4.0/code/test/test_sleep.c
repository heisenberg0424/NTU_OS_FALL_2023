#include "syscall.h"

main()
{
	int i;
	for (i = 11; i > 0; i-=2) {
		Sleep(99);
		PrintInt(i);
	}
}