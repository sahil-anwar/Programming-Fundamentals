#include<stdio.h>
int main()
{
    //Declaration-User-Console
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
    //Average
    float Average;
    Average= (FirstNumber+SecondNumber+ThirdNumber+FourthNumber+FifthNumber)/5;
    printf("The Average of The Given Numbers Are :%f",Average);
    //Highest
    int Highest;
    printf("\nEnter The Maximum Value you Entered in Five Choosen Numbers:");
    scanf("%d",&Highest);
    //Average-Highest
    int Minus;
    Minus=Average-Highest;
    printf("%d",Minus);
    return 0;
}