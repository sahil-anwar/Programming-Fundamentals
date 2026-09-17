#include<stdio.h>
int main()
{
	int Array[2][2],i,j;
	
	printf("Enter Array Number:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
		
		printf("a[%d][%d]------->",i,j);
		 scanf("%d",&Array[i][j]);
	}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d",Array[i][j]);
		}
		
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d",Array[j][i]);
		}
		
	}
	return 0;
}