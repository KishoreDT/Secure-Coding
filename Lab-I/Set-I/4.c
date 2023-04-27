#include <stdio.h>

int main()
{
    int m,p,c;
    printf("Enter the mark for Maths : ");
    scanf("%d",&m);
    printf("Enter the mark for Physis : ");
    scanf("%d",&p);
    printf("Enter the mark for Chemistry : ");
    scanf("%d",&c);
    int t=m+p+c;
    int mp=m+p;
    printf("\nTotal marks of Maths, Physis and Chemistry : %d",t);
    printf("\nTotal marks of Maths and Physis : %d",mp);
    if(m>=65 && p>=55 && c>=50 && t>=190 && m>=140)
    {
        printf("\nThe student is eligible");
    }
    else
    {
        printf("\nThe student is not eligible");
    }
}
