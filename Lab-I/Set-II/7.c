#include <stdio.h>
#include <string.h>

void main()
{
    char strng1[50], strng2[50]; int i;
    printf("Enter a string : ");
    scanf("%s", &strng2); 
    for(i=0; strng2[i]!='\0'; i++)
    {
        strng1[i]=strng2[i];
    }
    strng1[i]='\0';
    printf("\nAfter copy : %s", strng1);
    printf("\nNumber of charcters copied : %d", i);
}