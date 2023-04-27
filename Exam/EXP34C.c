#include <stdio.h>  
int main()  
{
    int *ptr=NULL;
    printf("Address: %d", ptr); // printing the value of ptr.
    printf("Value: %d", *ptr); // dereferencing the illegal pointer 
    return 0;  
}

/*
Mitigation:
#include <stdio.h>  
int main()  
{  
	int *ptr=NULL;
	printf("Address: %d", ptr); // printing the value of ptr.
	return 0;  
}
*/