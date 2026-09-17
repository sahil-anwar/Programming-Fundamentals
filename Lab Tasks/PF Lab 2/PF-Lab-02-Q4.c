#include<stdio.h>
int main()
{
    //Intialization
    int Litre=40;
    int Distance=700;
    int Kilometer=Distance/Litre;  
    float Mile=Kilometer*0.62;
    printf("Distance in Kilomtere per litre : %d km\n",Kilometer);
    printf("Distance in Mile per litre : %.2f Mile\n",Mile);
    return 0;
}