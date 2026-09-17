#include<stdio.h>
#define size 100000
int main()
{
	FILE *oo;
	char string[size];
	oo= fopen("third.txt","w");
	if(oo == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}
	printf("Enter the string: ");
	fgets(string,size,stdin);
	fprintf(oo,"%s",string);
	fclose(oo);
	system("cls");

		oo= fopen("third.txt","r");
			if(oo == NULL)
	{
		printf("Error in opening the file");
		return 1;
	}
	fgets(string,size,oo);
	printf("The string you entered is : \n %s",string);
	fclose(oo);
}
