#include<stdio.h>
int main()
{
    int Number;
    printf("Enter Any Number:");
    scanf("%d",&Number);
    int negative=Number*-1;
    if(Number<0)
    { 
        printf("Absolute Value of The Given Number::%d",negative);
    }
    if(Number>0)
    { 
        printf("Absolute Value of The Given Number::%d",Number);
    }
}