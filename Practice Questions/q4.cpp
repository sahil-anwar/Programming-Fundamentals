#include<stdio.h>
int calculateatd(int total, int atd);
int main()
{
	int total;
	int atd;
	printf("Enter total classes");
	scanf("%d",&total);
	printf("Enter atd");
	scanf("%d",&atd);
	calculateatd( total, atd);
	return 0;
}
int calculateatd(int total, int atd)
{
	int result;
	result = (atd*100)/total;
	printf("your atd is %d",result);
	if (result >= 80)
	{
		printf("you can sit in exam hall");
	}
	else
	{
		printf("you can't sit in exam hall");
	}
	return 0;
}