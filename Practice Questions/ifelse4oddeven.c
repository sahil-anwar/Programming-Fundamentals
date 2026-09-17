#include<stdio.h>
int main()
{
    int Number;

    printf("Enter Number:");
    scanf("%d",&Number);

     if(Number%2==0)
    {
        printf("Number Is Even");
    }
    else
    {
     printf("NUmber is Odd");
    }
    return 0;
}