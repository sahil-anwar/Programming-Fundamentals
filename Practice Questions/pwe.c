#include<stdio.h>

int fact(int z);        
int power(int p, int z);  
float total(int y, int z);  

int main()
{

int n, x; 
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the value of x:");
scanf("%d",&x);

printf("%f\n",total(n,x));    

return 0;
}


int fact(int z)    
{
  int a=1;
   for(int i=1;i<=z;i++)
   {
     if(z==0)
     a=1;
     a*=i;
   }
return a;
}


int power(int p, int z)  
{
  int a=1;
  for(int i=0;i<z;i++)  
  a*=p;
return a;
}


float total(int y, int z)   
{
 float a=1,b;
  for(int i=1;i<=z;i++)
  {
   b=(float)power(y,i)/fact(i);
   a=a+b;
  }
 return a;
}
