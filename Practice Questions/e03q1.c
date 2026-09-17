#include<stdio.h>
int angle_3(int First_Angle,int Second_Angle,int Third_Angle)
{
    printf("\nEnter First Angle : ");
    scanf("%d",&First_Angle);
    printf("\nEnter Second Angle : ");
    scanf("%d",&Second_Angle);
    Third_Angle = First_Angle + Second_Angle;
    printf("\nThird Angle of Triangle : %d",Third_Angle);
}
int main()
{
   int a,b,c;
   angle_3(a,b,c);
    angle_3(a,b,c);
    angle_3(a,b,c);
}