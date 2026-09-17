#include<stdio.h>
greatest(int a,int b,int c)
{
    printf("\nFirst Num:",a);
    scanf("%d",&a);
    printf("\nSecond Num:",b);
    scanf("%d",&b);
    printf("\nThird Num:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("\n%d is the Greast Num:",a);
    }
    else if(b>a && b>c)
    {
        printf("\n%d is the greatest num:",b);
    }
    else
    {
    printf("\n%d is the greastest Number:",c);
    }
}
int main()
{
    int x,y,z;
    greatest(x,y,z);
    greatest(x,y,z);
    greatest(x,y,z);
    greatest(x,y,z);
    return 0;
}