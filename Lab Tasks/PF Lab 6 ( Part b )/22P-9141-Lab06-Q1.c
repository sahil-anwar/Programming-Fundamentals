#include<stdio.h>
#define PI 3.14
int Cirle(float r) 
{
       float A= PI*(r*r);
        printf("Cirle:%.2f\n",A);
   }
int Triangle(float H,float B)
   {
       float T=(H*B)/2;
        printf("Triangle:%.2f\n",T);
   }
// AreaOfCircle : A = PI(r*r)
// AreaOfTriangle : h*base/2




int main()
{
 float  T,A,r, H,B;
 
    printf("Enter the Radius of the circle:");
    scanf("%f",&r);
     Cirle(r);
  
    printf("Enter the Height of the Triangle:");
    scanf("%f",&H);

     printf("Enter the  of the Base of the  Triangle:");
    scanf("%f",&B);
     Triangle(H, B);

    
}
