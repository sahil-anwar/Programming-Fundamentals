#include<stdio.h>
int main()
{
    int x=10;
    int y=5;
    int a=x;
    int b=y;
    printf(" x: %d | y: %d | x*=y : %d | x is now: %d\n ",a,b,x*=y,x);
    x=10;
    y=5;
    printf("x: %d | y: %d | x/=y : %d | x is now: %d\n ",a,b,x/=y,x);
    x=10;
    y=5;
    printf("x: %d | y: %d | x=y  : %d | x is now: %d\n ",a,b,x%=y,x);
    x=10;
    y=5;
    printf("x: %d | y: %d | x*=y+10 : %d | x is now: %d\n",a,b,x*=y+10,x);
  

}