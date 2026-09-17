#include<stdio.h>
int main()
{
int arr[6]={1,2,3,4,2,3};
for(int i=0 ; i<=5 ; i++)
{
    if(arr[i] == 3 || arr[i] == 4)
    {
    continue;
    printf("\t%d",arr[i]);
}
}
}