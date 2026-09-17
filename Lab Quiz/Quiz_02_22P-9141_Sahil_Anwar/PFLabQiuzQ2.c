#include<stdio.h>
int result(int dig);
int main()
{
int a;
int revs;

printf("Enter Four Digits\n");
scanf("%d", &a);
revs= result(a);
return 0;
}
int result(int dig)
{
	int dig1=dig/1000;
	int dig2=(dig/100)%10;
	int dig3=(dig/10)%10;
	int dig4=dig%10; 
	printf("%d%d%d%d",dig4-2,dig3-4,dig2-2,dig1-4);
}