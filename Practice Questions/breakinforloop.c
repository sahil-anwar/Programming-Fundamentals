#include<stdio.h>
int main()
{
    for(int i=0;i<10;i++)
    {
        if(i==7)
        {
            break;
        }
        printf("\n%d",i);
    }
    return 0;
}