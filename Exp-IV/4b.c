#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    char *a;
    a=(char *) malloc(sizeof(char));
    a="abc";
    printf(a);
    free(a);
}
