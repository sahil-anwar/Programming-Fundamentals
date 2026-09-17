#include <stdio.h>
#include<string.h>
int main()
{
	char num[10];
	int count=0;
	int countsp=0;
	char num2;
	int l;
 char filename1[]="file_n.txt";
 FILE *fp = fopen(filename1,"r");
 if(fp==NULL)
 {
  printf("Could not open file for reading\n");
  return 1;
 }
 printf("file exists:\n");
 while (fscanf(fp,"%s",&num)==1)
 {
 	printf("%.4s\n",num);
 	 l=l+strlen(num);
 }
  printf("total length : %d\n",l);
   while(1)
   {
   	  l=l+strlen(num);
   }
   printf("%d",l);
}
 