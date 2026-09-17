#include<stdio.h>
int main()
{
    float FinalMarks;
    float AssignmentsAvg=18/2;
    float MidExam=23;
    float Mid=23*30/100;
    float FinalExam=10.35;
    float Assignments=AssignmentsAvg*20/100;
     float Final=10.35*50/100;
     float sum= Assignments+Mid+Final;

    printf(" Assignments: %.1f\n MidExams: %.1f\n FinalExam: %.1f\n FinalMarks: %.1f\n",Assignments,Final,Mid,sum);
    
}