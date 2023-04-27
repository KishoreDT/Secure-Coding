#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    char *user="Secure coding, also referred to as secure programming, involves writing code in a high-level language that follows strict principles, with the goal of preventing potential vulnerabilities (which could expose data or cause harm within a targeted system)";
    char outbuf[20];
    char buffer[20];
    sprintf(buffer,"ERR Wrong command: %.400s",user);
    sprintf(outbuf, buffer);
}
