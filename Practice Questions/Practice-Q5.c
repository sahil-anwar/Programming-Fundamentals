#include<stdio.h>
#include<math.h>

int main()
{
    float a;
      printf("Enter Value of a:");
      scanf("%f",&a);
    float b;
      printf("Enter Value of b:");
      scanf("%f",&b);
    float c;
      printf("Enter Value of c:");
      scanf("%f",&c);
    float s;
      printf("Enter Value of s:");
      scanf("%f",&s);
    float Formula;
    Formula= sqrt((s*(s-a)*(s-b)*(s-c)));
     printf("A = %.2f",Formula);
    return 0;
}
    