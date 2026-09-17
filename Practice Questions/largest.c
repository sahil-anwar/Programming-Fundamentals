#include<stdio.h>
int main()
{
    int a=3,b=5,c=8;
    if(a>b && a>c)
    {
        printf("%d is the eldest person\n",a);
    }
    if(b>a && b>c)
    {
        printf("%d is the eldest person\n",b);
    }
    if(c>a && c>b)
    {
        printf("%d is the eldest person\n",c);
    }
    //
     if(a<b && a<c)
    {
        printf("%d is the youngest person\n",a);
    }
    if(b<a && b<c)
    {
        printf("%d is the youngest person\n",b);
    }
    if(c<a && c<b)
    {
        printf("%d is the youngest person\n",c);
    }
    
    
}