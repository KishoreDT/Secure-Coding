#include <stdio.h>
#include <stdlib.h>
void get_y_or_n(void)
{
    char response[8];
    puts("Continue? [y] n: ");
    //gets(response); //vulnerability
    fgets(response,5,stdin);
    if (response[0] == 'n')
    exit(0);
    return;
}
