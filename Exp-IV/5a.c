#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    char *a;
    char *b;
    a=(char *) malloc(sizeof(char));
    free(a);
    b=(char *) malloc(sizeof(char));
    free(a);
    free(b);
}
