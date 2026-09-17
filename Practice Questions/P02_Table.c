#include<stdio.h>
int main()
{
int Table ,Limit,*pt,*pl;
pt=&Table;          //Table
pl=&Limit;          //Limit        
int i;
int *a;
a=&i;
printf("Enter Table Number:");   //Console
scanf("%d",&Table);
for(int i=1;i<=8;i++)       //For-Loop
{
    int m=*pt * i;         // x * x = X
    printf("%d * %d = %d\n",*pt,i,m);    
}
return 0;
}
