#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter First Number:");
    scanf("%d",&x);
    printf("Enter Second Number:");
    scanf("%d",&y);
    printf("Enter Third Number:");
    scanf("%d",&z);
    if(x>y && x>z)
    {
        printf("%d is the largest integer",x);
    }
     if(y>x && y>z)
    {
        printf("%d is the largest integer",y);
    }
    if(z>x && z>y)
    
    {
        printf("Largest Integer is: %d",z);
    }
    return 0;
}