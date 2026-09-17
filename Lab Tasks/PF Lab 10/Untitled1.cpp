#include<stdio.h>
int main()
{
	int Number;
	printf("Enter Number:");
	scanf("%d",&Number);
	if(Number>0){
		printf("The Number if Positive");
	}
	if(Number=0) {
		printf("The Number is Zero:");
	}
	if(Number<0)
	{
		printf("The Number is Negative:");
	}
	return 0;
}