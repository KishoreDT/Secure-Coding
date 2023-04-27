#include<stdio.h>
#include<stdlib.h>
int main()
{
    for (int i=0; i<100; i++)
    {
       int *ptr = (int *)malloc(sizeof(int));
       printf("%d",ptr);
    }
} 
