#include<stdio.h>
int main()
{
	int Number1, Number2, HCF, Count=1,LCM;
	printf(" Two Positive Integers\n");
	scanf("%d%d",&Number1,&Number2);
	while(Count <=Number1 && Count <=Number2)
	{
	if(Number1%Count==0 && Number2%Count==0)
	{
		
		HCF=Count;
	}
	Count++;
}
	
	LCM=(Number1*Number2)/HCF;
	printf(" LCM of Two Numbers %d and %d is %d",Number1,Number2,LCM);
	return 0;
}