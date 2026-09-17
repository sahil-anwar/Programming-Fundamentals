#include<stdio.h>
int DisplayOdd(int n,int count)
{
for(int i=n ; i<=50 ; i++)
{

   count++;
     if(count==13)
    {
         continue;
    }
    else if(i%2!=0)
    {
    printf("\t%d",i);
    }
}
}


int main()
{
int n,count=0;
printf("Enter Any Number:");
scanf("%d",&n);
while(n%2==0)
{
printf("Error! input  is not an odd number.Enter an odd number");
scanf("%d",&n);
}
DisplayOdd(n,count);
}
