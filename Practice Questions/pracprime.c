#include<stdio.h>
int main()
{
    int number,i,count=0;

    printf("Enter Any Number:");
    scanf("%d",&number);

    for(i=2;i<=number;i++)
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
        printf("%d is not a prime number",number);
    }
    return 0;
}

