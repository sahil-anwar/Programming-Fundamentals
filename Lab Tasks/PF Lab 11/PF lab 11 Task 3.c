#include<stdio.h>
int main()
{
	int i,j,s,q,sum=0;
	int max = 0;
	float average=0,classavg,overallclass=0;
	printf("Enter the number of the students : ");
	scanf("%d",&s);
	printf("Enter the number of the quizzez : ");
	scanf("%d",&q);
	
	int a[s][q];
	for( i=1 ; i<=s ; i++)
	{
		printf("Enter score for each student :   ");
			printf("%d : \n",i);
		for(j=1 ; j<=q ; j++)
		{
			scanf("\n%d",&a[i][j]);
				if(a[i][j] > max)
				{
					max = a[i][j];
				}
			
		}
   }
   	   	for(j=1 ; j<=q ; j++)
	{
	
		int sum=0;
		for( i=1 ; i<=s ; i++)
		{
			sum=sum+a[i][j];	
		}
		average= sum / q;
		printf("Avearge score for quiz %d : %.2f\n ",j,average);
	}
   	for( i=1 ; i<=q ; i++)
	{
		int sum=0;
		for( j=1 ; j<=s ; j++)
		{
		
			sum=sum+a[i][j];
	     	
		}
		average= sum / s;
		printf("Avearge score for student %d : %.2f\n ",i,average);
		overallclass+=average;
	}
	classavg = overallclass / s;
		printf("Overall average of the class : %.2f\n ",classavg);
			printf("highest achieved score : %d\n ",max);
		
}

