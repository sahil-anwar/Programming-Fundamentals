#include<stdio.h>

int getfactorial(int num)
{
    int f=1;
    int i;
    for(int i=1;i<=num;i++)
    {
    f=f*i;}
    return f;
}
int main()
{
    int n,r;
    printf("enter the value of N: ");
    scanf("%d",&n);
    printf("enter the value of R: ");
    scanf("%d",&r);
    int nCr=getfactorial(n)/(getfactorial(r)*getfactorial(n-r));
    printf("Formula: %d",nCr);
}
