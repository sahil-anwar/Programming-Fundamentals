#include<stdio.h>
#include<math.h>
int main()
{
    float A;
    int P=3000;
    int n;
    printf("Enter The Year Number:");
    scanf("%d",&n);
    float r=0.03;
    float k=2;
    A = P * pow(1 + r/k,k * n);
    printf("The Money After %d Year is %.2f",n,A);
    return 0;

}
