#include <stdio.h>
int primeFactors(int Number)
{
    
    int i, Count = 0;

    for (i = 2; i <= Number/2; i++)
    {
        if(Number%i == 0)
        {
            Count++;
        }
    }
    if(Count == 0 && Number != 1 )
    {
        printf("\n%d", Number);
    }
}
int findFactors(int Number)
{
    int i;
    for (i = 1; i <= Number; i++)
    {
        if(Number % i == 0)
        {
            primeFactors(i);
        }
    }
}
int main()
{
    int i, j, Number, count;
    printf("Enter number to Find it's Prime Factors :  ");
    scanf("%d", &Number);
    findFactors(Number);
    return 0;
}