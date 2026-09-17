#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    for (i=0;i<10;i++)
    {
    scanf("%d",&n);
    }
    i = 0;

    while (i <= n) {
        sum =sum+i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
    }
    
