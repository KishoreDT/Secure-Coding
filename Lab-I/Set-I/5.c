#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%3==0 && n%7==0)
    {
        printf("\nThis ballon can fly to miney");
    }
    else
    {
        printf("\nThis ballon cannot fly to miney");
    }
}
