#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    ptr = (int*)malloc(2 * sizeof(int));
    ptr+=1;
    printf("%d",*ptr);
    return 0;
}
