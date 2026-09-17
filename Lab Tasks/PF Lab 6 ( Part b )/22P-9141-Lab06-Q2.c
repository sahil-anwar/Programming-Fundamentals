#include<stdio.h>
int Max(int a, int b)
{
    if(a>b && b<a)
    {
        
        printf("%d is the Maximum number",a);
    }
    else
    printf("%d is the maximum number",b);
}

int main()
{
    int Num1;
    printf("Enter The First Number:");
    scanf("%d",&Num1);

    int Num2;
    printf("Enter The First Number:");
    scanf("%d",&Num2);

     Max( Num1,Num2);
     
    return 0;
}