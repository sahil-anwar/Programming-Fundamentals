#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    for(int i=1;i<=10;i++)
    {
       for(int j=1;j<=10;j++)
    {
          printf("\n%d-%d",j,rand());
         
          
    }
}
}