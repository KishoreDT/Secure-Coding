#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the strength of Collage 1 : ");
    scanf("%d",&x);
    printf("Enter the strength of Collage 2 : ");
    scanf("%d",&y);
    if(x<y)
    {
        printf("\nCollage 2 is better");
    }
    else
    {
        printf("\nCollage 1 is better");
    }
}