#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned long int ul = ULONG_MAX;
    signed char sc;
    sc = (signed char)ul;
}

/*
Mitigation:
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned long int ul = ULONG_MAX;
    signed char sc;
    if(ul<=SCHAR_MAX){
        sc = (signed char)ul;  
    }
    else
    {
        printf("Value is greater.");
        return 0;//Or error handling
    }
}

*/