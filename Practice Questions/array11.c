#include<stdio.h>
int main()
{
    int array[]={4,3,4,332,452,4};

    int minimum=array[0];
    for(int i=0;i<6;i++)
    {
        if(minimum>array[i])
        {
            minimum=array[i];
        }
    }
     printf("\nMinimum NUmber in Array Is:%d",minimum);

    int maximum=array[0];
    for(int i=0;i<6;i++)
    {
        if(maximum<array[i])
        {
            maximum=array[i];
        }
    }
     printf("\nMaximum NUmber in Array Is:%d",maximum);

      int sum=0;
       for(int i=0;i<6;i++)
        {
        sum=sum+array[i];
        }
        printf("\nSum of the Array is:%d",sum);


        float average=0;
        average=sum/(sizeof(array)/4.0);
        printf("\nAverage of the Array is:%f",average);
        printf("\nLast ELement of Array:%d",array[5]);
        printf("\nSecond Element of the Array:%d",array[1]);
int odd=0;
int even=0;
        for (int i=0;i<6;i++)
	 {
	 	if(array[i]%2==0)
	 	even++;
	 	else   
	 	odd++;
	 }
	 printf("\nEven:%d \nOdd:%d", even,odd);
	 printf("\nIn Reverse Order:");
	 for(int i=6; i>=0;--i)
	 printf("%d\t", array[i]);
        return 0;
}