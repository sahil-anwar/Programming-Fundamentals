#include<stdio.h>
int  minus();
int sum1(int a,int b);

int  minus()
{ int a,b;
 printf("Enter two numbers to minus:");
    scanf("%d%d",&a,&b);
    int minus=a-b;
   
    return minus;
}
int sum1(int a,int b)
{
    int sum=0;
    printf("Enter two numbers to sum:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
    return 0;
}
int main()
{
    int a,b;
    char option;
   
   ;
     printf("minus=%d", minus(a,b));
     sum1(a,b);
    printf("\ndo you want to run the program again?Y/N)");
    scanf(" %c",&option);
    if(option=='Y' || option=='y')
    {
       sum1(a,b);
           minus(a,b);

    }
    else
    printf("thankyou for your response");
     
    return 0;
}