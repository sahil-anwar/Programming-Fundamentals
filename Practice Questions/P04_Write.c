#include <stdio.h>
#include <stdlib.h>
int main()
{
char num1[100];
char num2[100];
float num3[100];
char filename[]="name3.txt";
FILE *pf = fopen(filename,"w");
if(pf == NULL)
{
printf("File did not Exist:");
return 1;
}
printf("\nEnter Name:");
scanf("%s",num1);
fprintf(pf,"\n%s",num1);
//Roll-Number
printf("\nEnter Roll Number:");
scanf("%s",num2);
fprintf(pf,"\n%s",num2);
//GPA
printf("\nGPA:");
scanf("%f",num3);
fprintf(pf,"\n%s",num3);
fclose(pf);
return 0;
}