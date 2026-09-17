#include<stdio.h>
int main()
{
int Table ,Limit,*pt,*pl;
pt=&Table;
pl=&Limit;
int i;
int *a;
a=&i;
printf("Enter Table Number:");
scanf("%d",&Table);
//printf("Enter Table Limit Number:");
//scanf("%d",&pl);
for(int i=1;i<=8;i++)
{
    int m=*pt * i;
    printf("%d * %d = %d\n",*pt,i,m);
}
return 0;
}
