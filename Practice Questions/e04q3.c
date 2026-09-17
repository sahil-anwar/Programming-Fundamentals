#include<stdio.h>
attendance(float classesAttended, float classesTotal, float percentage )
{
    printf("\nEnter Number of AC:",classesAttended);
    scanf("%f",&classesAttended);

    printf("Enter Number of TC:",classesTotal);
    scanf("%f",&classesTotal);

    percentage = classesAttended/classesTotal*100;

    if(percentage>=80)
    {
        printf("Allowed In Exam Hall: %.2f ",percentage);
    }
    else{
        printf("Not Allowed In Exam Hall: %.2f ",percentage);
    }
}
int main()
{
    float x,y,z;
    attendance(x,y,z);
    attendance(x,y,z);
    attendance(x,y,z);
    attendance(x,y,z);
    return 0;
}