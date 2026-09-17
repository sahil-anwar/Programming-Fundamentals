#include<stdio.h>
int main()
{
    int feet;
    int inches;

    printf("Enter value in feets:");
    scanf("%d",&feet);

    inches = feet*12;
    printf("value: %d inches",inches);
    
    return 0;
}