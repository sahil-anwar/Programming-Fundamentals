#include<stdio.h>
int main()
{
int Marks;
printf("Enter Marks From 0 to 100\n");
scanf("%d",&Marks);
if(Marks<0 || Marks>100)
{
    printf("Sorry! Enter Marks From 0 to 100");
}
if(Marks>=80 && Marks<=100)
{
    printf("Grade-A");
}
if(Marks>=60 && Marks<=79)
{
    printf("Grade-B");
}
if(Marks>=50 && Marks<=59)
{
    printf("Grade-C");
}
if(Marks>=45 && Marks<=49)
{
    printf("Grade-D");
}
if(Marks>=25 && Marks<=44)
{
    printf("Grade-E");
}
if(Marks>=0 && Marks<=24)
{
    printf("Grade-F");
}
return 0;
}