#include<stdio.h>
int main()
{
    int num;
    printf("ENter Any NUmber:");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
        printf("\n%d",i);
        }
    }
    return 0;
}