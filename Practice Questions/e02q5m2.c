#include<stdio.h>
int main()
{
    int month;
    int day;
    int seconds;
    int hour;
    int mintues;

    printf("Enter Number of mintues:");
    scanf("%d",&mintues);

    month = mintues/43200;
    mintues = mintues%43200;
    day = mintues/1440;
    mintues = mintues%1440;
    hour = mintues/60;
    //mintues = mintues%60;
    //mintues  = mintues/60;
    //seconds = seconds%60;

    printf("%d month %d Day %d hours %d min %d seconds ",month,day,hour,mintues,seconds);
    return 0;

}