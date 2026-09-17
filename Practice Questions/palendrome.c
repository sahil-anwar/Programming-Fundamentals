#include<stdio.h>
#include<string.h>
int main()
{
    char string1[1];
    char string2[3];
    scanf("%s",string1);
    strcpy(string2,string1);
    strrev(string1);
    int cmp=strcmp(string1,string2);
    if(cmp==0)
    {
    printf("it is palendrome");
    }
    else{
        printf("it is not palendrome");
    }
    return 0;
}

