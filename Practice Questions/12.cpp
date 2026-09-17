#include<stdio.h>
int main()
{
	int Number1, Number2, HCF, Count=1;
	printf("Two Positive Integer\n");
	scanf("%d%d",&Number1,&Number2);
	while(Count <=Number1 && Count <=Number2)
	{
	HCF=(Number1%Count==0 && Number2%Count==0);
	}
	Count++;
}
	printf("HCF of %d and %d is %d\n", Number1, Number2, HCF);
	return 0;
}