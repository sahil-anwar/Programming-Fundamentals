#include<stdio.h>
calculateAttendance(int classesAttended, int classesTotal)
{
    float Attendence = ((float)classesAttended/(float)classesTotal) * 100;
    printf("<<< Your attendence is : %.1f Percent >>>\n",Attendence);
    if(Attendence>=80)
    {
        printf("The Student is Allowed to sit in Exam Hall\n");

    }
    else 
    printf("The Student is Not Allowed to sit in Exam Hall");
}
int main()
{
    int CA;
    printf("Enter The Number of Attended Classes:");
    scanf("%d",&CA);
    int TC;
    printf("Enter The Number of Total Classes:");
    scanf("%d",&TC);
    calculateAttendance(CA,TC);
    return 0;


}