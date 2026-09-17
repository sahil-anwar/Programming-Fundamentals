#include<stdio.h>
#include<math.h>
int main()
{
    //First-Point-M
    int x1;
    printf("Enter Value of x1:");
    scanf("%d",&x1);
     int y1;
    printf("Enter Value of y1:");
    scanf("%d",&y1);
    //First-Point-N
    int x2;
    printf("Enter Value of x2:");
    scanf("%d",&x2);
    int y2;
    printf("Enter Value of y2:");
    scanf("%d",&y2);
    //Formula
    float DistanceFormula;
    DistanceFormula= (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    printf("%f",sqrt(DistanceFormula));

    return 0;
}