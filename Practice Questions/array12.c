#include<stdio.h>
int main()
{ 
	int Maximum;
	int arr[10] ={3,5,6,7,1,12,34,56,7,890};
	int Minimum=arr[0];
    int Sum=0;
	int Average;
	int Even=0;
	int Odd=0;
	for(int i=0;i<10;i++)
	{
		if(Minimum>arr[i])
		Minimum=arr[i];
	}
	printf("The Minimum Number is:%d",Minimum);
	Maximum=arr[0];
	for(int i=1;i<10;i++)
	{
		if(Maximum<arr[i])
		Maximum=arr[i];
	}
	printf("\nMaximum:%d",Maximum);
	
	for(int i=1;i<10;i++)
	{
	Sum=Sum+arr[i];
	}
	printf("\nSum:%d",Sum);
	for(int i=1;i<10;i++)
	{
	Average=Sum/10;
	}
	printf("\nAverage:%d",Average);
	
 	printf("\nThis is the last element of the array: %d",arr[9]);
 	
 	printf("\nThe Second Number of the array:%d", arr[2]);
 	
 	for (int i=0;i<10;i++)
	 {
	 	if(arr[i]%2==0)
	 	Even++;
	 	else   
	 	Odd++;
	 }
	 printf("\nEven:%d \nOdd:%d", Even,Odd);
	 printf("\nIn Reverse Order:");
	 for(int i=9; i>=0;--i)
	 printf("%d\t", arr[i]);
}