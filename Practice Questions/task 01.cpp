#include<stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	int w;
	scanf("%d",&w);
	int s_req=300-s;
	if(s>=0&&w>=0)
	{
		if(s>=300&&w>0)
		{
			printf("pakistan won by %d wickets",w);
		}
		else if(s=300&&w==0)
		{
			printf("match is draw");
		}
		else if(s<300&&s>=0)
		{
			printf("pakistan need %d runs to win",s_req);
		}
	}
	else 
	printf("wrong input");
	return 0;
}
