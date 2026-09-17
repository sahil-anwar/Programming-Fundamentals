#include<stdio.h>
int main()
{
    int Num=123;
    int Num2=Num%10;
    int Num3=Num/10;
    int Num4=Num3%10;
    int Num5=Num3/10;
    int Sum=Num2+Num4+Num5;
    printf("Sum of the Digits of %d is : %d\n",Num,Sum);
    return 0;
}