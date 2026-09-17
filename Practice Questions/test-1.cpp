#include<stdio.h>
int main()
{
	int sec;
	int min;
	int hour;
	printf("enter the seconds= ");
	scanf("%d",&sec);
	hour= sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("the hours are=%d  the mins are= %d the seconds are= %d",hour,min,sec);
	return 0;
	
}