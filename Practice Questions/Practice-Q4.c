#include<stdio.h>
#include<math.h>

int main()
{
    float x1;
      printf("Enter Value of x1:");
      scanf("%f",&x1);
    float x2;
      printf("Enter Value of x2:");
      scanf("%f",&x2);
    float y1;
      printf("Enter Value of y1:");
      scanf("%f",&y1);
    float y2;
      printf("Enter Value of y2:");
      scanf("%f",&y2);
    float DisFormula;
    DisFormula= sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
     printf("The Distance Formula is: %.2f",DisFormula);
    return 0;
    


}