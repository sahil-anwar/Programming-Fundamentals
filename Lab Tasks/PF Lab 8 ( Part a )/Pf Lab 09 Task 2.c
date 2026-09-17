// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n;
    printf("Enter the rows:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=9;j>=i;j--)
          {
          printf(" ");
           }
       for(k=1;k<=i;k++)
       {
           printf(" *");
           
       }
       printf("\n");
   }
    for(i=n;i>=1;i--)
   {
       for(j=i;j<=9;j++)
          {
          printf(" ");
           }
       for(k=i;k>=1;k--)
       {
           printf(" *");
           
       }
       printf("\n");
   }
    return 0;
}