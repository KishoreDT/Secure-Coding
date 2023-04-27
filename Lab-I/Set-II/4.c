#include <stdio.h>

int area(int r)
{
    float a;
    a=(22*r*r)/7;
    return a;
}

int volume(int h,int r)
{
    float v;
    v=(area(r)*h)/3;
    printf("\nVolume of cone is %f",v);
}

int main()
{
    int r,h;
    printf("Enter the radius : ");
    scanf("%d",&r);
    printf("Enter the heigth : ");
    scanf("%d",&h);
    volume(h,r);
}