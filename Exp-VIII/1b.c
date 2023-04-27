#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    unsigned short int total;
    total = 21000 + 50000 + 1;
    if (total <= USHRT_MAX)
    {
        printf("Out of range");
    }
    else 
    {
        char *buff = (char *)malloc(total);
    }
}
