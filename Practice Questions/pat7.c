#include<stdio.h>
int main()
{
	for(int x=1; x<=6; x++)
	{
	for(int y=1; y<=6; y++)
	{
		if(((x==1||x==6)&&y>=1&&y<=6)||x+y==7)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
}
printf("\n");
return 0;
}
