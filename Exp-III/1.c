#include <stdio.h>
#include <string.h>

int main(void)
{
    int len = 0;
    char str[10] = {0};
    printf("Enter the name : ");
    gets(str); // Used gets() to cause buffer overflow
    printf("\nlen = [%d]", len);
    len  = strlen(str);
    printf("\nlen of string entered is : [%d]", len);
    return 0;
}
