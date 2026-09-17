#include<stdio.h>
int main()
{
	int min, min2;
	int size = 7;
	int a[size];
 	
 	for(int i = 0; i < size ; i++ ){
 	scanf("%d",&a[i]);
	 }
	 min = a[0];
	for(int i = 0 ; i < size ; i++){
		if(min>a[i]){
			min = a[i];
		}
	}
	printf("Minimum Value Is: %d\n",min);
	
	min2 = min;
	for(int i = 0 ; i < size ; i++){
		if(min>a[i]){
			if(min2>min);{
			}
		}
	}
	printf("Second Minimum Value is: %d",min2);
}