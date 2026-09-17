#include<stdio.h>
int main()
{
    int Length;
    printf("Enter The Lenght:");
    scanf("%d",&Length);
    int Breadth;
    printf("Enter The Breadth:");
    scanf("%d",&Breadth);
    if(Length==Breadth)
    {
        printf("It Is Square");
    }
    else
    {
        printf("It Is Not a Square");
    }
    return 0;
}