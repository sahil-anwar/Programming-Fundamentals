#include <stdio.h>
int main()
{
int hr,min,sec;
printf("enter the second=");
scanf("%d",&sec);
hr=sec/3600;
sec=sec%3600;
min=sec/60;
sec=sec%60;
printf("hour=%d min=%d sec=%d",hr,min,sec);
return 0;
}
