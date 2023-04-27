#include <stdio.h>
#include <stdlib.h>


void main()
{
    char str[100];
    int l= 0;
    printf("Enter the string : ");
    fgets(str, sizeof str, stdin);
	printf("\nThe characters of the string are : ");
    while(str[l]!='\0')
    {
       printf("%c  ", str[l]);
       l++;
    }
    printf("\n");
}