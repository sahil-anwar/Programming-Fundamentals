#include<stdio.h>
int main()
{
    int Day;
    int Seconds;
    int Hour;
    int Min;
    
    printf("Enter Number of Seconds:");
    scanf("%d",&Seconds);

    Day = Seconds/86400;
    Seconds = Seconds%86400;
    Hour = Seconds/3600;
    Seconds = Seconds%3600;
    Min  = Seconds/60;
    Seconds = Seconds%60;

    printf(" %d Day %d Hours %d Min %d Seconds ",Day,Hour,Min,Seconds);
    return 0;
}