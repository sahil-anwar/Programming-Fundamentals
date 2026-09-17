#include<stdio.h>
#include<math.h>
int main()
{
    int L=100000;
    int n=360;
    float r=4000/12;
    float  P;
 
    P=L*r*(1+r)*n/(1+r)*n-1;
   
    float a=r*(1+r)*n;
    float b=(1+r)*n-1;
    P=L*(a/b);
    printf("Monthly Payment:%d\n",P);
      return 0;


}