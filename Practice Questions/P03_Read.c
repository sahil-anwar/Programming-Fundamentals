#include <stdio.h>
#include <stdlib.h>
int main()
{
char filename[]="read2.txt";
FILE *pf = fopen(filename,"r");
if(pf == NULL)
{
printf("File did not Exist:");
return 1;
}
int num;
while(fscanf(pf,"%d",&num)==1)
{
printf("\n%d",num);
}
return 0;
}