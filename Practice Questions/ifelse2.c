#include<stdio.h>
int main()
{
    int Grade;

    printf("Enter Student Marks:");
    scanf("%d",&Grade);

    if(Grade>=0 && Grade<=40)
    {
        printf("D");
    }
    else if(Grade>=41 && Grade<=60)
    {
        printf("C");
    }
    else if(Grade>=61 && Grade<=80)
    {
        printf("B");
    }
    else
    {
        printf("A");
    }
    return 0;
}