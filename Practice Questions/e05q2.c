#include<stdio.h>
int main()
{
    int num;
    printf("ENter Any NUmber:");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            if(i==1)
            continue;
        printf("\n%d",i);
        }
        
    }
    return 0;
}