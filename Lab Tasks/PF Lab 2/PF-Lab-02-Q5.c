#include<stdio.h>
#define pi 3.14
int main()
{
    int a=20;
    int b=22;
    int c=30;
    int x=2,y=3;
   
    printf("Intial Values of the variables: a=20 b=22 c=30 \n");

    printf("value of a*4+b/2-c*b-(++a): %d\n ",a*4+b/2-c*b-(++a));

    printf("value of --a*(3+b)/2-c++*b/pi : %.2f\n ",--a*(3+b)/2-c++*b/pi);
    
    printf("value of pi*c-(x+(++y))/a*b*a*b*(-(++c)): %.2f \n",pi*c-(x+(++y))/a*b*a*b*(-(++c)));

    printf("Values of the variable are now: a=%d b=%d c=%d",a,b,c);    
    return 0;
}