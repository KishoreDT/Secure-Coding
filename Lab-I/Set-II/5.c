#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],c;
    printf("Enter a string : ");
    gets(str);
    int x,len=strlen(str);
    printf("Enter a character : ");
    scanf("%s",&c);
    //printf("%s %d\n",str,len);
    for(int i=0;i<len;i++)
    {
        //printf("%c",str[i]);
        if(c==str[i])
        {
            x++;
        }
    }
    printf("\nFrequency : %d",x);
}