#include<stdio.h>
#include<conio.h>
#include<string.h> 
void Palindrome(char statement1[10],char statement2[10]){
    printf("%s",statement1);
}

int main()
{
    char statement1[10];
    scanf("%s",statement1);
    char statement2[10];
    int compare;
    strcpy(statement2,statement1);
    strrev(statement1);

    compare=strcmp(statement1,statement2);
    Palindrome(statement1,statement2);
    if(compare==0)
    {
    printf("\nIt is Palindrome:");
    }
    else
    {
        printf("It is not a Palindrome");
    }
    return 0;
}