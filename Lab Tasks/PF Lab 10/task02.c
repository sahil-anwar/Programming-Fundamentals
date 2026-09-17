#include <stdio.h>
int main()
{
int arr[60],J,K;
for (int i=0;i<20;i++)
{
arr[i]=i*i;
J=i+20;
arr[J]=J*J*J;
K=i+40;
arr[K]=i+K;
}

for(int i=0;i<20;i++)
{
printf("%d ",arr[i]);
}

printf("\n");
for(int J=20;J<40;J++)
{
printf("%d ",arr[J]);
}

printf("\n");
for(int K=40;K<60;K++)
{
printf("%d ",arr[K]);
}
return 0;
}
