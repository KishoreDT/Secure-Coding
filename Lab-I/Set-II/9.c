#include <stdio.h>

int main()
{
    char aa[100], bb[100];
    printf("Enter the first string : ");
    gets(aa);
    printf("Enter the second string : ");
    gets(bb);
    char *a = aa;
    char *b = bb;
    while(*a)
    {
        a++;
    }
    while(*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("\nThe string after concatenation is: %s ", aa);
    return 0;
}