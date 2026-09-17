#include<stdio.h>
int main()
{
    int Year;
    printf("Enter Years Of Service: ");
    scanf("%d",&Year);
    int Salary;
    printf("Enter Your Salary:");
    scanf("%d",&Salary);
    float Increment=Salary*5/100;
    float Bonus=Salary+Increment;
    if(Year>=5)
    {
        printf("Congraculations! You got a Bonus & Your Salary is Now:%.0f",Bonus);
    }
    if(Year<5)
    {
    printf("Sorry! your year of service is less than 5 years.");
    }
    return 0;


}