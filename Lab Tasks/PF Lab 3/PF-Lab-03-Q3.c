#include<stdio.h>
int main()
{
    //declaration
    int Number;
    int position;
    int Mask;
    int Bit;
    //User-Console
    printf("Enter Any Number:");
    scanf("%d",&Number);
    printf("Enter Extract Position Number:");
    scanf("%d",&position);
    //left-shift-nthBIt
     Mask = 1 << position;
    //right-shift-result
    Bit = (Number & Mask) >> position;
    //print-result
    printf("The nth value of the %dth of bit %d is :  %d\n",position,Number,Bit);
    return 0;
}