#include<stdio.h>
int main()
{

    int number,i,count=0;
    
    printf("Enter number:");
    scanf("%d",&number);
   
    int half=number/2;
 
    for(i=1;i<=half;i++)
    {
    
    if(number%i==0)
       {
            count++;
       }
    }
    if(count==1) 
   
       {
       printf("%d is a prime number",number);
       }
       else
       {
        printf("%d is not  a prime number",number);
       }
       return 0;
}

