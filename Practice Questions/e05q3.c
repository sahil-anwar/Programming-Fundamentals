#include<stdio.h>
int main()
{
    int num;
    int count=1;
    printf("ENter Any NUmber:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        count=count*i;
    }
    printf("\nFactorial is :%d",count);
    return 0;
}