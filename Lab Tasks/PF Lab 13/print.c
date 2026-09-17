#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("text.txt","w");
	fprintf(fp,"Adil khan from mardan he is my teacher and friend he teaches me pf and also discrete. he is so funny. ");
	fclose(fp);	
}
