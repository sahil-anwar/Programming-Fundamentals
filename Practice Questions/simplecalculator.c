#include<stdio.h>
int main()
{
  int a;
  printf("\nEnter First Number:\n");
  scanf("%d",&a);
  
  int b; 
  printf("\nEnter Second Number:\n");
  scanf("%d",&b);

  int sum=a+b;
  int minus=a-b;
  int multiply=a*b;
  int division=a/b;
  int mode=a%b;

  printf("\nsum is %d\n",sum);
  printf("\nMinus is %d\n",minus);
  printf("\nMultiply is %d\n",multiply);
  printf("\ndivion is %d\n",division);
  printf("\nMode is %d\n",mode);

  scanf("%d%d%d%d%d",&sum,&minus,&multiply,&division,&mode);
  
  return 0;
  
}