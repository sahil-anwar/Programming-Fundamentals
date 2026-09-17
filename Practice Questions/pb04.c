#include<stdio.h>
int SmallValue(int[]);
int main()
{  
    int result;
    int Array[10] = {11,2,3,4,5,6,7,9,0,1};  

    printf("Value if: %d",result = SmallValue(Array));	
}

int SmallValue(int Array[])
{
    int count =1;
    for(int i=0; i<11; i++)
    for(int j=0; j<=i; j++)
    {
        if(Array[j] == count)
        count++;
    }
    return count;
}