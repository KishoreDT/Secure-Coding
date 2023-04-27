#include <stdio.h>
#include<wchar.h>
#include<cstdlib>  
#include<string.h>
int main()
{
    wchar_t wide_str1[] = L"0123456789";
    wchar_t *wide_str2 = (wchar_t *)malloc((wcslen(wide_str1) + 1));
    if (wide_str2 == NULL) {
        printf("Error");
        /* handle error */
        
    }
    free(wide_str2);
    wide_str2 = NULL;
    return 0;
}
