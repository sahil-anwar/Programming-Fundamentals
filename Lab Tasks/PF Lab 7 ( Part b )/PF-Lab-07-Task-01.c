#include<stdio.h>
void num(int i)
{
  if(i==51)
  return;
  else
  {
  printf("\t%d",i);
  num(i+1);
  }
  
}
int main()
{
int i=1;
num(i);
return 0;

}
