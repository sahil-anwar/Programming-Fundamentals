#include<stdio.h>
#include<math.h>
int main()
{
	int x1=0;
	int y1=0;
	int d=0,count=0;
	int x2,y2;
	int sum=0;
	for(int st=0; st>=0; st++)
	{
		//int sum=0;
		scanf("%d",&x2);
		scanf("%d",&y2);
		if(x2==x1&&y2==y1)
		break;
		else
		{d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		sum=sum+d;
		x1=x2;
		y1=y2;
		count++;}
	}
	printf("\ndistance is %d\n",sum);
	printf("steps =%d\n",count);
	int avg=sum/count;
	printf("average is =%d\n",avg);
	return 0;
}

