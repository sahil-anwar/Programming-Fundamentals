#include <stdio.h>
#include <string.h>
int length(char num[10],char num2);
int main()
{
	int length(char num[10],char num2);
    {
	
	int num3;
	char num[10];
	char num2;
 char filename1[]="umar.txt";
 FILE *fp = fopen(filename1,"r");
 if(fp==NULL)
 {
  printf("Could not open file for reading\n");
  return 1;
 }
 printf("file exists:\n");
 while (fscanf(fp,"%s",&num)==1)
 {
 	printf("%.3s\n",num);
 	num3 = num3+strlen(num);
 }
 	printf("total length is %d",num3);
}
}