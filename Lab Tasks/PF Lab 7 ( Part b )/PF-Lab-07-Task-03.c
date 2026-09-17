#include<stdio.h>
//void pass();
void pass(int *Number)
{
    int cube;
    cube=*Number * *Number * *Number;
    printf("%d",cube);
    return;
}
int main()
{
    int Number;
    printf("Enter Any Number to Find it's Cube:");
    scanf("%d",&Number);
    pass(&Number);
}