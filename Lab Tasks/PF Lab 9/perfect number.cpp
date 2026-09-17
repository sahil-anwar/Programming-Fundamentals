#include<stdio.h>
int main()
{
	int num;
	printf("enter number ...");
	scanf("%d",&num);
	int i;
	for(i=1;i<=28;i++)
	
	if (num%i==0)
	printf("%d\n",i);
	return 0;
}