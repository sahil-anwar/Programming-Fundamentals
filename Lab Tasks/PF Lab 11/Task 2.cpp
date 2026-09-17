
#include <stdio.h>
int main() 
{
    int i,j;
int a[4][4];
printf("enter the array element at index :\n");
for (i=0 ; i<4 ; i++)
{
    for (j=0 ; j<4 ; j++ )
    {
    	        printf("a[%d][%d] :",i,j);

    	scanf("%d",&a[i][j]);
    }
    printf("\n");
}
printf("orignal array:\n");
for (i=0 ; i<4 ; i++)
{
    for (j=0 ; j<4 ; j++ )
    {
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}
printf("transpose:\n");
for (i=0 ; i<4 ; i++)
{
    for (j=0 ; j<4 ; j++ )
    {
        printf(" %d ",a[j][i]);
    }
    printf("\n");
}
    return 0;
}
