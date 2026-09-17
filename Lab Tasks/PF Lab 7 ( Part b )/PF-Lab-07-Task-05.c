#include<stdio.h>
int lcm(int *a,int *b,int i)
{
if(i%*a==0 && i%*b==0)
{
return i ;

}
else
{

  return  lcm(a,b,i+1);
   
}

}
int main()
{
    int a,b,i=1;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    
    int store=lcm(&a,&b,i);
     printf("LCM=%d",store);
     
}