#include<stdio.h>
int main()
{
    char filename[]="write.txt";
    FILE *fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("NOT EXIST\n"); 
        return 1;
    }
    char num;
    int count=0;
    int countq=0;
    printf("the file exist\n");
    while(fscanf(fp,"%c",&num)==1)
   { if(num==' ')
    {
        countq++;
    }
    else
    {
        count++;
    }
    }
    printf("number of characters without spaces %d",count);

}