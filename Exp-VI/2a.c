#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int ui_a=20, ui_b=10;
    unsigned int udiff;
    if (ui_a < ui_b)
    {
        printf("Error");
    } 
    else
    {
        udiff = ui_a - ui_b;
        printf("Answer : %d",udiff);
    }
    return 0;
}