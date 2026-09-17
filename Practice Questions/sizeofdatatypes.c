#include<stdio.h>

int main()
{
    //
    int integer;
    char character;
    float floatsize;
    double floatdouble;
    //
    printf("\n Size of Integer :%zu bytes ",sizeof(integer));
    printf("\n Size of Char :%zu bytes ",sizeof(character));
    printf("\n Size of Float :%zu bytes ",sizeof(floatsize));
    printf("\n Size of DoubleFloat :%zu bytes ",sizeof(floatdouble));
    //
    return 0;
}

