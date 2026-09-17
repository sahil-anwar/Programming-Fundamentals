#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
        i++;
        if(i==7)
        {
            break;
        }
        printf("\n%d",i);
    }
    return 0;
}