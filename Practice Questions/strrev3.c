#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]={'s','a','h','i','l'};
    strlen(s1);
    int L;
    L=strlen(s1)-1;
    for(int i=0;i<L/2;++i)
    {
         int ch=s1[i];
         s1[i]=s1[L-i];
         s1[L-i]=ch;
    }
    printf("%s",s1);
    return 0;
}