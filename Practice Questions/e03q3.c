#include<stdio.h>
   int reverse(int a,int reverse,int reverse1,int reverse2)
   {
    printf("\nEnter any number:\n ",a);
    scanf("%d",&a);

    reverse = a%100;
    reverse = reverse%10; 
    reverse1 = (a%100)/10;
    reverse2 = a/100;

    printf("Reverse of Number:%d%d%d",reverse,reverse1,reverse2);
   }
int main()
{
    int a,b,c,d;
    reverse(a,b,c,d);
    reverse(a,b,c,d);
    reverse(a,b,c,d);
    reverse(a,b,c,d);
    return 0;
}