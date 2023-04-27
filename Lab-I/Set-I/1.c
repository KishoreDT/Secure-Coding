#include <stdio.h>

int main()
{
    int n;
    printf("Enter the current Semester : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nLong Vacation");
    }
    else
    {
        printf("\nShort Vacation");
    }
}
