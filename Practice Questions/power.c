#include<stdio.h>
int main()
{
    int power=1,y=3;
    int x=6;
    for(int i=0; i<y; i++)
    {
        power=power*x;
    }
    printf("%d ",power);
}