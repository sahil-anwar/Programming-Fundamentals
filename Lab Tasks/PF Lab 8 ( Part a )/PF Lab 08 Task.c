#include <stdio.h>
int printtable(int num,int i)
{
     if (num < 1) {
        printf("Invalid input. Number should be greater than 0.\n");
        return 0;
    }

    // Print the multiplication table
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    printf("do you want to print another table?");
        printf("(Y/N)");

    int option;
    scanf(" %c",&option);
    if(option=='y' || option=='Y')
    {
       
         printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
     printtable(num,i);
    }
    else
    

    printf("Exiting...\n");

}

int main() {

    int num, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    printtable(num,i);
}

