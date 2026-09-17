#include<stdio.h>
#define size 1000000
int main()
{
	
	FILE *DS;
	char str[size];
	DS = fopen("both.txt","w");
	fprintf(DS,"Adil khan from mardan he is my teacher and friend he teaches me pf and also discrete. he is so funny. ");
	fclose(DS);
	
	DS = fopen("both.txt","r");
	if(DS == NULL)
	{
		printf("The file is empty");
		return 1;
	}
	fgets(str,size,DS);
	printf(" %s",str);
	fclose(DS);
	return 0;
	
}
