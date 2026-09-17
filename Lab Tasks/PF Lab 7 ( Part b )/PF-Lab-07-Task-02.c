#include<stdio.h>
void reverse(int i)
{
 if(i==0)
 return;
 else
 {
printf("\t%d",i);
reverse(i-1);
 }
}

int main()
{
int i;
printf("ENter the nth number:");
scanf("%d",&i);
reverse(i);
}