#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="sahil";
    char s2[20]="anwar";
    int l=strlen(s1);
    for(int i=0;s2[i]!='\0';++i)
    {
          s1[l+i]=s2[i];
    }
    printf("%s",s1);
    return 0;
}