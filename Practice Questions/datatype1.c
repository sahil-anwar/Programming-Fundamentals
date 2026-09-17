#include<stdio.h>
int main()
{
    int a;
    printf("Size of Interger:%zu\n",sizeof(a));
    char b;
    printf("Size of Character:%zu\n",sizeof(b));
    float f;
    printf("Size of Float:%zu\n",sizeof(f));
    double d;
    printf("Size of double:%zu\n",sizeof(d));
    long int li;
    printf("Size of long:%zu",sizeof(li));
    return 0;
}