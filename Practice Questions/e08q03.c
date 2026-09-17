#include<stdio.h>
int main()
{
    int array[]={1,2,34,524,21,1,3,3};
    int count=0;
    int search;
    printf("ENter Number:",search);
    scanf("%d",&search);
    for(int i=0;i<8;i++)
    {
        if(search==array[i]){
            count++;
        }
    }
    printf(" NUmber in array are %d times ",count);
    return 0;
}