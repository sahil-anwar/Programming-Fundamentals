#include<stdio.h>
int main()
{
  int num,i;
  int coffee=0;
  int tea=0;
  int coke=0;
  int orangejuice=0;
  printf("enter the num:");
  scanf("%d", &num);

  while(num!=-1 && num<5)
  {
    printf("choose something in menu : %d\n",num);
  switch (num) {
    case 1:
    coffee++;
    printf("coffee ***** %d\ntea ***** %d\ncoke ***** %d\norangejuice ***** %d\n ",coffee,tea,coke,orangejuice);
    break;

    case 2:
    tea++;
    printf("coffee ***** %d\ntea ***** %d\ncoke ***** %d\norangejuice ***** %d\n",coffee,tea,coke,orangejuice);
    break;

    case 3:
    coke++;
    printf("coffee ***** %d\ntea ***** %d\ncoke ***** %d\norangejuice ***** %d\n",coffee,tea,coke,orangejuice);
    break;

    case 4:
    orangejuice++;
    printf("coffee ***** %d\ntea ***** %d\ncoke ***** %d\norangejuice ***** %d\n",coffee,tea,coke,orangejuice);
    break;
    default:
      break;
  }
  i++;
  printf("choose somthing in menu : ");
  scanf("%d",&num);
}

printf(" End the program");

  return 0;
}
