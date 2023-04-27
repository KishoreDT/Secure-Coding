#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    unsigned int ui_a=10, ui_b=20;
    unsigned int usum = ui_a + ui_b;
    if (usum < ui_a)
    {
        printf("Error");
    }
    else
    {
        printf("Answer : %d",usum);
    }
    
    return 0;
}