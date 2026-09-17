#include<stdio.h>
int main()
{
int x = 2;
int y = 5;
int z = 0;
int a = x == 2;
int b = x != 5;
int c = x != 5 && y >= 5;
int d = z != 0 || x == 2;
int e = !(y < 10);
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
}




