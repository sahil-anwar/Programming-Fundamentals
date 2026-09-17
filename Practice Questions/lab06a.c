#include<stdio.h>
int add()
{
    int a=10,b=25;
    int sum;
    sum=a+b;
   // printf("Sum:%d\n",sum);
   return (a+b);
  
}
int main()
{
//      add();
//       add();
//        add(); 
//        add();
// 
int result,x=10,y=20;
result=add(x,y);
printf("Answer %d",result);
}