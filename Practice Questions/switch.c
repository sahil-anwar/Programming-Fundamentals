#include<stdio.h>
int main()
{
    int Number;

    printf("Enter Number: ");
    scanf("%d",&Number);
    switch(Number)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
       break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;
    
        default:
        printf("Invalid Number:");
    }
    return 0;
}