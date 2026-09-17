#include <stdio.h>
int main()
{
int arr[10];
int i;
int minimum;
printf("enter 10 number to find the minimum\n");
for (i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
minimum=arr[0];s
for (i=0;i<10;i++)
{
if (minimum>arr[i])
{
minimum=arr[i];
}
}
printf("%d",minimum);
return 0;
}
