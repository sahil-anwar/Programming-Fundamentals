#include<stdio.h>
int main()
{
    //Intialization
    int Surveyed=16500; 
    int TwentyPer=Surveyed/100*20; //Purchase-Drink-Per-Week
    int SeventyTwoPer=TwentyPer/100*72; //Purchase-Citrus-Falvor
    printf("%d number of customers purchase one or more energy drink per week.\n",TwentyPer);
    printf("%d number of customers  who purchase citrus-flavored energy drinks \n",SeventyTwoPer);
    return 0;
}