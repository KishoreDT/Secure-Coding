#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    signed int si = INT_MIN;
    unsigned int ui;
    if (si<0)
    {
        printf("Unsigned has no negative value");
    }
    else
    {
        ui= (unsigned int)si;
        printf("%d",ui);
    }
}
