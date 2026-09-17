#include<stdio.h>
int main(){
	int n,fact=1,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Factorial is %d\n",n);
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("%d\n",i);
		}
	}

}