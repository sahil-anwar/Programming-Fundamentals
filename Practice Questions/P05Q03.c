#include<stdio.h>
#include<string.h>
int main()
{	
char num[100];
char num2;    

char filename1[]="file1.txt";      //filename
char filename2[]="file1.txt";

FILE *pr = fopen(filename1,"r");    //Pointers
FILE *pw = fopen(filename2,"w");
//FileExist-NotExist
if(pr==NULL || pw==NULL)      
{
printf("File did not exist to read\n");
return 1;
}
printf("File Exist:\n");
num2=fgetc(pr);
//Loop
while (num2!=EOF)
{
fputc(num2,pw);
num2=fgetc(pr);
}
printf("Content Copied\n");
//writingclose
fclose(pr);             
fclose(pw);
}