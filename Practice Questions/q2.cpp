#include<stdio.h>
int main()
{
	int x;
	printf("enter number");
	scanf("%d",&x);
	
	if(x%2==0){
		printf("Even number is : %d",x);
	}else{
		printf("Odd number is : %d",x);
	}
}