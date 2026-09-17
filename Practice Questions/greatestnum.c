#include<stdio.h>
int main()
{
    int Num1;
    printf("Enter The First Number:");
    scanf("%d",&Num1);
      int Num2;
    printf("Enter The Second Number:");
    scanf("%d",&Num2);
    if(Num1>Num2 && Num2<Num1)
    {
    printf("%d Is The Greatest Number",Num1);
    }
      if(Num2>Num1 && Num1<Num2)
    {
    printf("%d Is The Greatest Number",Num2);
    }
    if(Num1==Num2)
    {
        printf("%d & %d are Equal Number",Num1,Num2);
    }
    return 0;
    
}
