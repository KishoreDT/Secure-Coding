#include <stdio.h>
#include<string.h>
int main () 
{
    size_t len;
    char cstr[] = "char string";
    const char* scstr[] = "signed char string";
    const char* ucstr[] = "unsigned char string";
    len = strlen(cstr);
    printf("%ld",len);
    len = strlen(scstr); /* warns when char is unsigned */
    printf("\n%ld",len);
    len = strlen(ucstr); /* warns when char is signed */
    printf("\n%ld",len);
 }
