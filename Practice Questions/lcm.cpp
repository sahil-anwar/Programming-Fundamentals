#include<stdio.h>
int main()
{
	int n1, n2, hcf, count=1,lcm;
	printf("enter two positive integers\n");
	scanf("%d%d",&n1,&n2);
	while(count <=n1 && count <=n2)
	{
	if(n1%count==0 && n2%count==0)
	{
		
		hcf=count;
	}
	count++;
}
	
	lcm=(n1*n2)/hcf;
	printf("the lcm of two numbers %d and %d is %d",n1,n2,lcm);
	return 0;
}