#include<stdio.h>
int main()
{
    //Declarization
    int a,b;
    //User-Console
    printf("Enter Value of a: ");
    scanf("%d",&a);
    printf("Enter Value of b: ");
    scanf("%d",&b);
    //Cube-For-a
    int cube_a;
    cube_a=a*a*a;
    //Cube-For-b
    int cube_b;
    cube_b=b*b*b;
    //Formula
    int formula;
    formula = cube_a - cube_b - 3*a*b*(a-b);
    printf("%d",formula);
    return 0;
}