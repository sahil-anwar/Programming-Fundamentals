#include<stdio.h>
int main()
{
    char filename[]="filewirte.txt";
    FILE *fp=fopen(filename,"w");
    if(fp==NULL)
    {
        printf("file did not exist to write");
        return 1;
    }
    printf("File Exist to write");
    return 0;
}