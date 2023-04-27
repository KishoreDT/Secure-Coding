#include <stdio.h>

int main()
{
    int n;
    printf("Enter the roll number : ");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("\nTheory Session");
    }
    else if(n<=120 && n%4!=0)
    {
        printf("\nLab-I");
    }
    else if(n>120 && n<=240 && n%4!=0)
    {
        printf("\nLab-II");
    }
    else
    {
        printf("\nIncorrect Register Number");
    }
}
