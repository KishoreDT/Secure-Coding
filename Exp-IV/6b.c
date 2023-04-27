#include <stdlib.h>
#include<stdio.h>
int f() {
    int *m = malloc(1024); // memory leak!
    printf("Hi");
    free(m);
}
void main()
{
    
    for(int i=0;i<50;i++)
        f();
}
