#include<stdio.h>
#define PI 3.14
int main()
{
    int a=20;
    int b=22;
    int c=30;
    int p=2,q=3;
   
    printf("Intial Values of the variables: a=20 b=22 c=30 \n");

    printf("value of a*4+b/2-c*b-(++a): %d\n ",a*4+b/2-c*b-(++a));

    printf("value of --a*(3+b)/2-c++*b/PI : %.2f\n ",--a*(3+b)/2-c++*b/PI);

    printf("value of PI*c-(p+(++q))/a*b*a*b*(-(++c)): %f \n",PI*c-(p+(++q))/a*b*a*b*(-(++c)));

    printf("values of the variable are now a=%d b=%d c=%d",a,b,c);    
    return 0;
}