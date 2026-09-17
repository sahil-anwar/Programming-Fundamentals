
#include<stdio.h>

#define size 800000
int main()
{
	FILE *fp;
	
	char str[size];
	fp=fopen("text.txt","r");
	if(fp == NULL)
	{
		printf("the file is empty");
		return 1;
		
	}
	fgets(str,size,fp);  //// it prints with the space
    //fscanf(fp,"%s",str);// it does not print space
	printf(" %s",str);
	fclose(fp);
	return 0;
	
}
