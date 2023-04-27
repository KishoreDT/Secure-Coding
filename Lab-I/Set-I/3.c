#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
        printf("\nThe point is in 1st Quadrant");
    }
    else if(x>0 && y<0)
    {
        printf("\nThe point is in 2nd Quadrant");
    }
    else if(x<0 && y<0)
    {
        printf("\nThe point is in 3rd Quadrant");
    }
    else if(x<0 && y>0)
    {
        printf("\nThe point is in 4th Quadrant");
    }
    else
    {
        printf("\nThe point is center");
    }
}
