#include<stdio.h>
int largest(int x, int y,int z);
int main()
{
	int x;
	int y;
	int z;
	printf("Enter a first number");
	scanf("%d",&x);
	printf("Enter a second number");
	scanf("%d",&y);
	printf("Enter a third number");
	scanf("%d",&z);
	int ans = largest(x,y,z);
	printf("%d is the largest value among three values",ans);
	return 0;
}
int largest(int x, int y, int z)
{
	int large;
	if(x>y && x>z)
	{
		large=x;
	
	}
	else if(y>x && y>z)
	{
		large=y;
	
		
	}
	else
	{
		large=z;
	
	}
	return large;
}

