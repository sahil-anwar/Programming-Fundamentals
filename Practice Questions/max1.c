#include <stdio.h>
int main()
{
int arr[10];
int i;
int maximum;
printf("enter ten values");
for (i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
maximum=arr[0];
for (i=0;i<10;i++)
{
if (maximum<arr[i])
{
maximum=arr[i];
}
}
printf("%d",maximum);
return 0;
}
