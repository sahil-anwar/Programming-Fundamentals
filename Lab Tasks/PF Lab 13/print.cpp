#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("text.txt","w");
	fprintf(fp,"Adil");
	fclose(fp);	
}
