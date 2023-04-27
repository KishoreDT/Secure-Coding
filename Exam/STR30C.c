#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str  = "string literal";
    str[0] = 'S';
    printf("%s",str);
}

/*
Mitigation:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]  = "string literal";
    str[0] = 'S';
    printf("%s",str);
}
*/