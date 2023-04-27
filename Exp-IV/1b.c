#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)calloc(3,sizeof(int));
    ptr+=1;
    printf("%d",*ptr);
    return 0;
}
