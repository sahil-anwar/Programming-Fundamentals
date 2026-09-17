#include<stdio.h>
int main()
{
    int x=10; 
    int y=5; 
    int z=22; 
    int temp=z * x+y;
    int temp2=z * (x+y);
    
    printf("z * x+y : %d\n\n",temp);
    printf("z * x+y : %d\n\n",temp2);
    
    printf("ans after decrement : %d\n",(temp)-1);

    printf("incrementing: %d\n\n",z++);


    printf("ans after incrementing z: %d\n\n",z * (x+y));
 
    
 
    return 0;
}