#include<stdio.h>
oddeven(int Num1)
{
 printf("\nENter Any NUmber:");
 scanf("%d",&Num1);
 if(Num1%2 == 0)
 {
 printf("%d is Even NUmber",Num1);
 }
 else
 {
 printf("%d is Odd Number",Num1);
 }
}
int main()
{
    int Num1;
oddeven(Num1);
oddeven(Num1);
oddeven(Num1);
 return 0;
}
