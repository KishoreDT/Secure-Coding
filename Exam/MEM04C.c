#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int size=0;
    ptr = (int*)malloc(size);
    return 0;
}

/*
Mitigation:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    int size=0;
    if (size==0)
    {
        printf("Error");
    }
    ptr = (int*)malloc(size);
    return 0;
}

*/