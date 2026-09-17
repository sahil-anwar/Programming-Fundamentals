#include<stdio.h>
int main()
{
    int n1,n2,*pn1,*pn2;
    printf("\nEnter Two Numbers\n");

    pn1 = &n1;
    pn2 = &n2;
    printf("Enter First Number:");
    scanf("%d",pn1);
    printf("Enter Second Number:");
    scanf("%d",pn2);
    if(*pn1>*pn2)

    {
        printf("Largest Number Is:%d",*pn1);
    }
     else if(*pn1<*pn2)
    {
        printf("Largest NUmber IS:%d",*pn2);
         return 0; 
    }

}
