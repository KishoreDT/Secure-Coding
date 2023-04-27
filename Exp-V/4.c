#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int ui = UINT_MAX;
    signed char c = -1;
    if (c == ui) 
    {
        puts("Why is -1 = 4,294,967,295???");
    }
}
