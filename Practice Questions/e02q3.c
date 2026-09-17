#include<stdio.h>
int main()
{
    int a,b,x;
    int c=3;

    printf("Enter The value of a:",a);
    scanf("%d",&a);

    printf("Enter the value of b:",b);
    scanf("%d",&b);

    x = a*a*a-b*b*b-c*a*b*(a-b);
    printf("value of formula: %d",x);
     
     return 0;
}