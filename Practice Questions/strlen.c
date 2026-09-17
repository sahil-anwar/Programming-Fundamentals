#include<stdio.h>
int main()
{
    char s1[30];
    int count=0;
    scanf("%s",s1);
    for(int i=0; s1[i]!='\0'; ++i)
    {
        count++;
    }
    printf("Length of the String:%d",count);
    return 0;
}