#include<stdio.h>
int main()
{
    
    int number;
    int count=0;

    printf("Enter NUmber:",number);
    scanf("%d",&number);

    for(int i=0;number!=0;i++)
    {
        count++;
        number=number/10;
    }
     printf("%d",count);
      
    return 0;
}