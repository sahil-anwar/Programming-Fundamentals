#include <stdio.h>
int main()
{
	int a;
	int b;
	int value;
	printf("put the value of a\n");
	scanf("%d",&a);
	printf("put the value of b\n");
	scanf("%d",&b);
	value=a*a*a-b*b*b-3*a*b*(a-b);
	printf("answer=%d\n",value);
	return 0;
}
