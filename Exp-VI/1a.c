#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int ui_a=10, ui_b=20;
    unsigned int usum;
    if (UINT_MAX - ui_a < ui_b)
    {
        printf("Error");
    } 
    else
    {
        usum = ui_a + ui_b;
        printf("Answer : %d",usum);
    }
    return 0;
}