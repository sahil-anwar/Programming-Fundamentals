#include<stdio.h>
int main()
{
    int i=1;
    while(i<10)
    {
        
        if(i==7)
        {
            continue;
        }
        printf("\n%d",i);
        i++;
    }
    return 0;
}