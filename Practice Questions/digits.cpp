#include<stdio.h>
int main()
{
	int n1,n2,hcf,count=1;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	while(count<=n1 && count<=n2)
	{
	if(n1%count==0 && n2%count==0)
	{
	hcf=count;
	}
		count++;
	}
	printf("HCF of %d and %d is %d\n",n1,n2,hcf);
	return 0;
}