#include<stdio.h>
int main()
{
    int FirstNumber;
    printf("Enter First Number:");
    scanf("%d",&FirstNumber);
    
     int SecondNumber;
    printf("Enter Second Number:");
    scanf("%d",&SecondNumber);

     int ThirdNumber;
    printf("Enter Third Number:");
    scanf("%d",&ThirdNumber);

     int FourthNumber;
    printf("Enter Fourth Number:");
    scanf("%d",&FourthNumber);

     int FifthNumber;
    printf("Enter Fifth Number:");
    scanf("%d",&FifthNumber);

    

    float Average;
    Average= (FirstNumber+SecondNumber+ThirdNumber+FourthNumber+FifthNumber)/5;
    printf("The Average of The Given Numbers Are :%f",Average);

    return 0;
}