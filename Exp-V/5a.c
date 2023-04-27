#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    signed int si = INT_MIN;
    unsigned int ui = (unsigned int)si;
    printf("%d",ui);
}
