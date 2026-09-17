#include<stdio.h>
int main()
{
	int i,j;
	int a[3][5];
	for( i=0 ; i<3 ; i++)
	{
		for( j=0 ; j<3 ; j++)
		{
			printf(" enter the value at index a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
		for( i=0 ; i<3 ; i++)
	{
		for( j=0 ; j<3 ; j++)
		{
			if(i == 2)
			{
				a[i][j]*=3;;
			}
			printf(" %d",a[i][j]);

		}

		printf("\n");
	}
	return 0;
}
