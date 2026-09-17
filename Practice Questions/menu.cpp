#include<stdio.h>
int main()
{
  int n,i;
  int COFFEE=0;
  int TEA=0;
  int COKE=0;
  int ORANGEJUICE=0;
  printf("enter the number:");
  scanf("%d", &n);

  while(n!=-1 && n<5)
  {
    printf("choose something in menu : %d\n",n);
  switch (n) {
    case 1:
    COFFEE++;
    printf("COFFEE> %d\nTEA: %d\nCOKE: %d\nORANGEJUICE:%d\n ",COFFEE,TEA,COKE,ORANGEJUICE);
    break;

    case 2:
    TEA++;
    printf("COFFEE> %d\nTEA: %d\nCOKE: %d\nORANGEJUICE: %d\n",COFFEE,TEA,COKE,ORANGEJUICE);
    break;

    case 3:
    COKE++;
    printf("COFFEE> %d\nTEA: %d\nCOKE: %d\nORANGEJUICE: %d\n",COFFEE,TEA,COKE,ORANGEJUICE);
    break;

    case 4:
    ORANGEJUICE++;
    printf("COFFEE> %d\nTEA: %d\nCOKE: %d\nORANGEJUICE: %d\n",COFFEE,TEA,COKE,ORANGEJUICE);
    break;
    default:
      break;
  }
  i++;
  printf("choose somthing in menu : ");
  scanf("%d",&n);
}

printf(" End the program");

  return 0;
}