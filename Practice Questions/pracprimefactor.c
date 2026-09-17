#include<stdio.h>
int main()
{
    int number,i,j,count=0;

    printf("Enter Any Number:");
    scanf("%d",&number);

    for(i=2;i<=number;i++)
    {
        if(number%i==0)
        {
            for(j=2;j<=i/2;j++)
                if(i%j==0)
                {
                count=1;
                break;
                }
            if(count==0)N
                  {
                   printf("%d\t",i);
                  }

        }
    }
    

}