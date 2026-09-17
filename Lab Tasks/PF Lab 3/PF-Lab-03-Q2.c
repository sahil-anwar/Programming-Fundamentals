#include<stdio.h>
int main()
{
    int Age1;
    printf("Enter Age of First Person:");
    scanf("%d",&Age1);

    int Age2;
    printf("Enter Age of Second Person:");
    scanf("%d",&Age2);

    int Check_Age=(Age1>20 & Age1<25) && (Age2>20 & Age2<25);
    printf(" Check Age:%d",Check_Age);
    return 0;

}