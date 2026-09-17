#include<stdio.h>
int main()
{
    int x=10;
    int y=5;
    int m=x;
    int n=y;
    printf(" x: 10 | y: 5 | x*=y : %d | x is now: %d\n ",x*=y,x);
    x=10,y=5;
    printf("x: 10 | y: 5 | x/=y : %d | x is now: %d\n ",x/=y,x);
    x=10,y=5;
    printf("x: 10 | y: 5 | x=y  : %d | x is now: %d\n ",x%=y,x);
     x=10,y=5;
    printf("x: 10 | y: 5 | x*=y+10 : %d | x is now: %d\n",x*=y+10,x);
  

}