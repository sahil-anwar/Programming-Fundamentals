#include<stdio.h>
int main()
{
    int Number,i,half,count=0;
    printf("Enter Any Number:");
    scanf("%d",&Number);
    half=Number/2;
    for(i=1;i<=half;i++)
    {
        if(Number%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("%d Is a Prime Number",Number);
    }
    else
    {
        printf("%d Is not a Prime Number",Number);
    }
    return 0;
}