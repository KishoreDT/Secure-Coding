#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()  
{  
	unsigned int ui;
	ui = UINT_MAX; // e.g., 4,294,967,295 on x86-32
	ui++;
	printf("ui = %u\n", ui); // ui = 0
	ui = 0;
	ui--;
	printf("ui = %u\n", ui); // ui = 4,294,967,295 on x86-32  
}
