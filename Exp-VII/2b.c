#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int ui = UINT_MAX;
    signed char c = -1;
    if (c >=0) 
    {
        ui=(unsigned int) c;
    }
    else
    {
        printf("Error");
    }
}
