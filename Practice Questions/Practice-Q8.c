#include<stdio.h>
int main()
{
    
   float callrate=0.12;
//
   int StartingHour;
   int StartingMin;
   int EndingHour;
   int EndingMin;
   int StartingTime;
   int EndingTime;
   float Cost;
   float CallCost;
//
printf("<<Enter the Hours In 24hrs Format>>\n");
   printf("Enter Starting Hour:");
   scanf("%d",&StartingHour);
   printf("Enter Starting Min:");
   scanf("%d",&StartingMin);
   printf("Enter Ending Hour:");
   scanf("%d",&EndingHour);
   printf("Enter Ending Min:");
   scanf("%d",&EndingMin);
//
   StartingTime=StartingHour*60+StartingMin;
   EndingTime=EndingHour*60+EndingMin;
//
   CallCost= EndingTime - StartingTime;
   Cost=CallCost*callrate;
//
   printf("The Cost of the call from %d:%d to %d:%d is: $%.2f",StartingHour,StartingMin,EndingHour,EndingMin,Cost);
   return 0;
}