#include<stdio.h>
int main()
{
    int Number,count=0;
    printf("Enter Any Number:");
    scanf("%d",&Number);
   
    for(int i=2;i<=Number/2;i++)
    {
        if(Number%i==0)
        {
                 count++;
        }
    }
        if(count==0)
        {
        printf("%d is a prime number\n",Number); 
        }
        else
        {
              printf(" %d is not a prime number\n",Number);
        }
        return 0;
}
