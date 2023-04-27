#include <stdio.h>

int area(int s)
{
    int a;
    a=s*s;
    return a;
}

int volume(int h,int s)
{
    float v;
    v=(area(s)*h)/3;
    printf("\nVolume of pyramid is %f",v);
}

int main()
{
    int s,h;
    printf("Enter the side : ");
    scanf("%d",&s);
    printf("Enter the heigth : ");
    scanf("%d",&h);
    volume(h,s);
}