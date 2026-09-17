#include<stdio.h>
int main()
{
	int s,q,average,sum=0;
	printf("Enter the number of the students : ");
	scanf("%d",&s);
	printf("Enter the number of the quizzez : ");
	scanf("%d",&q);
	
	int a[s][q];
	for(int i=1 ; i<=s ; i++)
	{
		printf("Enter the score of student  ");
			printf("%d : \n",i);
		for(int j=1 ; j<=s ; j++)
		{
		
			scanf("\n%d",&a[i][j]);
		}
   }
   	for(int i=1 ; i<=s ; i++)
	{
	
	
		for(int j=1 ; j<=q ; j++)
		{ 
		
			sum+=j;
			
			average= sum / s;
         	printf("Avearge score for average %d : %d ",j,average);
		}
   }
}
