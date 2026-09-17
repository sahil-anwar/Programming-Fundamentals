#include<stdio.h>
int main()
{
    int Number1;
    printf("Enter First Number:");
    scanf("%d",&Number1);

    int Number2;
    printf("Enter Second Number:");
    scanf("%d",&Number2);

    int check_Odd=!(Number1%2==0 && Number2%2==0);
    printf(" Check Odd:%d",check_Odd);
    return 0;

}