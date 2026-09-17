#include<stdio.h>
int main()
{
    int arr[6];
    printf("Enter Numbers:");
    for(int i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<6; i++)
    {
        printf(" %d",arr[i]);
    }
}