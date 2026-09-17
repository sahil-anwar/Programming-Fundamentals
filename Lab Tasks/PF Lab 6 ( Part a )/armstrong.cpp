#include<stdio.h>
int main()

{
	int num;
	int sum;
	int a; 
	int b;
	int  c;
	printf("enter the number");
	scanf("%d",&num);
	a=num/100;
	b=(num/10)%10;
	c=num%10;
	sum=a*a*a+b*b*b+c*c*c;
	if(num==sum)
	printf("number is armstrong");
	else
	printf("number is not armstrong");
	return 0;
	
	
}