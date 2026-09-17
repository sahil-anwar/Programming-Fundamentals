#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks:",marks);
    scanf("%d",&marks);
    if(marks>80)
    {
        printf("Grade A");
    }
    else if(marks>60)
    {
        printf("Grade B");
    }
    else if(marks>40)
    {
        printf("Grade C");
    }
    else if(marks>30)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}