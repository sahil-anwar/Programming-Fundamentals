#include<stdio.h>
int main()
{
    int kilogram;
    int pounds;

    printf("Enter Value in KG:");
    scanf("%d",&kilogram);

    pounds = kilogram * 2.20462;
    printf("Value: %d pounds",pounds);

    return 0;
}