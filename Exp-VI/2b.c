#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int ui_a=20, ui_b=10;
    unsigned int udiff = ui_a - ui_b;
    if (udiff > ui_a)
    {
        printf("Error");
    }
    else
    {
        printf("Answer : %d",udiff);
    }
    
    return 0;
}