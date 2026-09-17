#include<stdio.h>
int main()
{
    int month;
    int day;
    int seconds;
    int hour;
    int min;
    
    printf("Enter Number of seconds:");
    scanf("%d",&seconds);
    month = seconds/2592000;
    seconds = seconds%2592000;
    day = seconds/86400;
    seconds = seconds%86400;
    hour = seconds/3600;
    seconds = seconds%3600;
    min  = seconds/60;
    seconds = seconds%60;

    printf("%d month %d Day %d hours %d min %d seconds ",month,day,hour,min,seconds);
    return 0;

}