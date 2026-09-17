#include<stdio.h>
int main()
{
    int count=0;
	int x;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter That Value To Search:");
    scanf("%d",&x);
    for (int i =0;i<10;i++)
    {
        if(x==a[i])
		{
        count++;
		}
    }
    printf("Element In Array  %d times",count);
    return 0;
}