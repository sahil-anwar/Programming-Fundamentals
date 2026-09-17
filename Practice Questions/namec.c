#include <stdio.h>
#include <stdlib.h>
int main()
{
char num1[100];
//char filename[]="name1.txt";
FILE *p = fopen("name1.txt","w");
if(p==NULL)
{
printf("File did not exist");
return 1;
}

printf("Name:");
fscanf("%d",p);
fprintf(p,"%s",num1);


//fclose(p);
/*printf("\nRoll Number:");
//scanf("%d",&filename);
fprintf(p,"%d",filename);
//fclose(p);
printf("\nGPA:");
//scanf("%d",&filename);
fprintf(p,"%d",filename);*/
fclose(p);
return 0;
}