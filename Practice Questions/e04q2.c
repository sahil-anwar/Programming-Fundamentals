#include<stdio.h>
oddeven(int a)
{
    //int a;
    printf("\nEnter Number:",a);
    scanf("%d",&a);
    if(a/2 && a%2==0)
    {
        printf("The Number Is Even:%d",a);
    }
    else{
    printf("The Number is Odd:%d",a);
    }
}
int main()
{
    int x;
    oddeven(x);
    oddeven(x);
    oddeven(x);
    return 0;
}