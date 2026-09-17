#include <stdio.h>
#include <stdlib.h>
int main()
{
char filename[]="name3.txt";
FILE *pf = fopen(filename,"r");
if(pf == NULL)
{
printf("File did not Exist:");
return 1;
}
int num;
for(int i=0;fscanf(pf,"%d",&num)!=EOF;i++)
{
printf("\n%d",num);
}
return 0;
}