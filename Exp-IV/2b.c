#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;
    ptr = (int*)malloc(2 * sizeof(int));
    if (ptr==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        ptr+=1;
        printf("%d",*ptr);
    }
    return 0;
}
