#include<stdio.h>
int main()
{

    int seconds;
    int hour;
    int min;
    
    printf("Enter Number of seconds:");
    scanf("%d",&seconds);

    hour = seconds/3600;
    seconds = seconds%3600;
    min  = seconds/60;
    seconds = seconds%60;

    printf("%d hours %d min %d seconds ",hour,min,seconds);
    return 0;

}