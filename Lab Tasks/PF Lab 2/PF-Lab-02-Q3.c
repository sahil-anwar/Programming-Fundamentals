#include<stdio.h>
int main()
{
    //Intialization
    int x=10; 
    int y=5; 
    int z=22; 
    
    printf("z * x+y : %d\n",z * x+y);
    printf("z * x+y : %d\n",z * (x+y));
    printf("Answer after decrement : %d\n",(z * x+y)-1);
    printf("Incrementing: %d\n",z++);
    printf("Answer After incrementing z: %d\n",z * (x+y));
 
    
 
    return 0;
}