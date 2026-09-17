#include<stdio.h>
float rent(float days, float miles)
{
    float TotalCost= days * 25 + (miles*0.15);
    printf("The Total Cost of the Rent:%.2f\n",TotalCost);
    if(days>30)
    {
        float Discount = (int)TotalCost/100 * 20;
        printf("The Discount is:%.2f\n",Discount);
        int costwithdiscount;
        costwithdiscount=TotalCost-Discount;
        printf("The Final Cost with Discount is : %d\n",costwithdiscount);
    }

}
int main()
{
    float Days;
    printf("Enter the Number of days:");
    scanf("%f",&Days);
    float Miles;
    printf("Enter The Number of miles:");
    scanf("%f",&Miles);
    rent( Days, Miles);
    return 0;
}