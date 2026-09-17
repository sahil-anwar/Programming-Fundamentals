#include<stdio.h>
int main()
{
   int Table;
   printf("\nEnter Table:");
   scanf("%d",&Table);

   int count=0;
   while (count<10)
   {
    count++;
    int product=Table*count;
    printf("%d * %d = %d\n",Table,count,product);
    }
    
    return 0;
}
   