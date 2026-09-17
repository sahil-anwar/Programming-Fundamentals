#include<stdio.h>
int main()
{
    int Volume;
    int Length;
    int Width;
    int Height;

    printf("Enter Length:");
    scanf("%d",&Length);

    printf("Enter Width:");
    scanf("%d",&Width);

    printf("Enter Height:");
    scanf("%d",&Height);

    Volume = Length*Width*Height;
    printf("Lenght = %d",Volume);

    return 0;
  
}