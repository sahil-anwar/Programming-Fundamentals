#include<stdio.h>
int main()
{
    int age;
    int salary;
    printf("Enter Age:",age);
    scanf("%d",&age);
    printf("Enter Salary",salary);
    scanf("%d",&salary);

    if(age>=50)
    {
        if(salary<60000)
        {
            salary=salary+10000;
        }
        else
        {
         salary=salary+5000;
        }
    }
    else
    {
        salary=salary+3000;
    }
    printf("Salary=%d",salary);
    return 0;
} 