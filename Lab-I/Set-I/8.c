#include <stdio.h>

int main()
{
    int n;
    printf("Enter the heigth : ");
    scanf("%d",&n);
    if(n<=135)
    {
        printf("\nThe person is short");
    }
    else if(n>=165)
    {
        printf("\nThe person is tall");
    }
    else
    {
        printf("\nThe person is average");
    }
}
