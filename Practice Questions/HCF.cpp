#include<stdio.h>
int main()
{
	int Number1;
	int Number2;
	int HCF;
	int count=1;
	printf("Enter The First Number:\n");
	scanf("%d",&Number1);
	printf("Enter The Second Number:\n");
	scanf("%d",&Number2);
	while(count<=Number1 && count<=Number2)
	{
	if(Number1%count==0 && Number2%count==0)
	{
	HCF=count;
	}
	
	count++;
	}
	printf("HCF of %d and %d is %d\n",Number1,Number2,HCF);
	return 0;
}