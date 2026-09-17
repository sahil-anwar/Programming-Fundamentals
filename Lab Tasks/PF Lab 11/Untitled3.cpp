#include<stdio.h>
int main()
{
	int s,q,sum=0,classavg=0;
	float average=0;
	printf("Enter the number of the students : ");
	scanf("%d",&s);
	printf("Enter the number of the quizzez : ");
	scanf("%d",&q);
	
	int a[s][q];
	for(int i=1 ; i<=s ; i++)
	{
		printf("Enter the score of student   ");
			printf("%d : \n",i);
		for(int j=1 ; j<=q ; j++)
		{

			scanf("\n%d",&a[i][j]);
		}
   }
   	   	for(int j=1 ; j<=q ; j++)
	{
	
		int sum=0;
		for(int i=1 ; i<=s ; i++)
		{
			sum=sum+a[i][j];	
		}
		average= float(sum) / q;
		printf("Avearge score for quiz %d : %.2f\n ",j,average);
	}
   	for(int i=1 ; i<=q ; i++)
	{
		int sum=0;
		for(int j=1 ; j<=s ; j++)
		{
			sum=sum+a[i][j];
			for(int k=j ; k<=s ; k++)
			{
				classavg+=sum;
			}
		}
		average= float(sum) / s;
		printf("Avearge score for student %d : %.2f\n ",i,average);
	}
		printf("Overall class average : %d : ",classavg);
}

