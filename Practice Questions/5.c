#include <stdio.h>
int factorial(int num)
{
    int factorial =1, count; 
    for (count=1; count<=num; count++)
    {
        factorial=factorial*count;
    }
    return (factorial);

}
int combination(int x, int y){
	int ncr = factorial(x)/factorial(y)*factorial(x-y);
	return ncr;
}
int main ()
{
    int n,r;
    
    printf("enter n : ",n);
    scanf("%d",&n);
    printf("enter r : ",r);
    scanf("%d",&r);
    
    printf("ncr factorial of %d and %d is : ",n,r);
    printf("%d",combination(n,r));
return 0;
}
