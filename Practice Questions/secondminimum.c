#include <stdio.h>
void sort(int Array[], int n)
	{
		int i, j;
		for (i = 0; i < n-1; i++)
{
		for (j = 0; j < n-i-1; j++)
{
		if (Array[j] > Array[j+1])
{
		int TEMP = Array[j];
		Array[j] = Array[j+1];
	Array[j+1] = TEMP;
	}
}
	}
}

	int main()
{
	int n,i;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	int Array[n];
	printf("\nInput the array elements : ");
	for(i = 0; i < n; i++)
{
	scanf("%d",&Array[i]);
}
	sort(Array, n);
	printf("\nThe second smallest element is %d \n",Array[1]);
	return 0;
}