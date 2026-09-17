#include<stdio.h>
int main()
{
	char m='a';
	char n='b';
	char p;
	scanf("%c",&p);
	int age;
	scanf("%d",&age);
	if(p==m)
	{
		if(age<65)
		{
			printf("fee is 10$");
		}
		else if(age>=65)
		{
			printf("fee is 05$");
		}
	}
	else 
	printf("fee is 20$");
	return 0;
}
