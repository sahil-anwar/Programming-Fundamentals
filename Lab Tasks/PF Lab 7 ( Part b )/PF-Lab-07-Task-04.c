#include<stdio.h>
int factorial(int n)
{
if(n == 0)
return 1;
else
{
    return n * factorial(n-1);
}
}
int main()
{
int n;
printf("Enter any number:");
scanf("%d",&n);
int r;
printf("Enter any number:");
scanf("%d",&r);
factorial(n);
int nCr=factorial(n)/(factorial(r)*factorial(n-r));
printf("%d",nCr);
}