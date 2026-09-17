#include <stdio.h>

int main()
{     int sum = 1000;
	 int product;
    int a;
    for (a = 1; a <= sum/3; a++)
    {
        int b;
        for (b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b;
            if ( a*a + b*b == c*c )
               printf("a=%d, b=%d, c=%d\n",a,b,c);
        }
    }
    product=a*b*c;
    printf("The Product of abc is: ",product);
    return 0;
}
