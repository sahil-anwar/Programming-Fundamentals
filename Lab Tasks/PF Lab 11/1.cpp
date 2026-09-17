#include<stdio.h>
int main()
{
	int i=10,j=10;
	int a[i][j] = {0};
	for( i=0 ; i<=10 ; i++)
	{
		for( j=0 ; j<=10 ; j++)
		{
			printf("Enter the row and seat number to reserve (0 0) to stop): ");
			scanf("%d",&a[i][j]);
			if(a[i][j] > 10)
			{
			printf("Invalid row and seat number . please try again.");
			scanf("%d",&a[i][j]);
			}
			}	
	}
}
