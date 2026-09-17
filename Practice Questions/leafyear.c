#include<stdio.h>
int main()
{
    int leafyear;
    printf("Enter Year:");
    scanf("%d",&leafyear);

     if(leafyear%4==0 )        
    {
        printf("it is a leaf year");
    }
    else if(leafyear%400==0)
    {
         printf("it is a leaf year");
    }
    else if( leafyear%100==0)
    {
        printf("it is not a leaf year");
    }

    else
    {
        printf("it is not a leaf year");
    }
    return 0;
}