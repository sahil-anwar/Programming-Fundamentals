#include<stdio.h>
int main()
{
    int HeldClasses;
    int AttendedClasses;
    printf("Enter The Number Of Total Classes:");
    scanf("%d",&HeldClasses);
    printf("Enter The Number Of Attended Classes:");
    scanf("%d",&AttendedClasses);
    int Attendence=AttendedClasses*HeldClasses/100;
    if(Attendence>=75)
    {
        printf("\nStudent is allowed to sit in exam hall");
        char ask;
                printf("\nMedical Cause  Y N  \n");
                scanf("\n%c",&ask);
        if(ask=='Y' || ask=='y')
        {
              printf("\nStudent is allowed in exam hall he/she is medically fit")  ;
        }
        if(ask=='N' || ask=='n' )
        {
            printf("\nStudent is not allowed in exam hall he/she is not medically fit")  ;
        }
    }
    else
    {
    printf("\nStudent is not allowed to sit in exam hall");
    }
  
}