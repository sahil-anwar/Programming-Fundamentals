#include <stdio.h>

int main()
{
  int count = 0;
  int i;
  int ar[9];
  printf("Enter 9 integers: ");
  for(int i=0; i<9 ; i++)
  {
    scanf("%d",&ar[i]);
  }
  printf("Displaying values : \n");
  for(int i=0 ; i<9 ;i++)
  {
    printf(" %d",ar[i]);
  }
  for(int j=1; j<ar[j]; j++)
    {
      if(ar[j] % j == 0)
          {
          count++;
          printf(" c = %d \n", count);
          }
          }
       if (count == 2)
       printf("s is %d \n", count);
          
          
          return 0;
          


}





