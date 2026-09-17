#include<stdio.h>
int main()
{
	int Number;
	int count;
	count=0;
	printf("Enter The First Number");
	scanf("%d",&Number);
	while(Number>0)
	{
		Number=Number/10;
		count++;
	}
	printf("%d",count);
	return 0;
}