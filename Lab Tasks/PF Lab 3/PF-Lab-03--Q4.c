#include<stdio.h>
int main()
{
    //Colours-1
    unsigned char red1=0xFF;
    unsigned char green1=0x00;
    unsigned char blue1=0x00;
    //Colours-2
    unsigned char red2=0x00;
    unsigned char green2=0xFF;
    unsigned char blue2=0x00;
    //
    int color1=(red1<<16) | (green1<<8) | (blue1<<0);
    int color2=(red2<<16) | (green2<<8) | (blue2<<0);

    unsigned int check=(color1 | color2);
    red2=(check>>16);
    green2=(check>>8);
    blue2=(check>>0);

    printf("%x %x %x",red2,green2,blue2);
    return 0;
}
