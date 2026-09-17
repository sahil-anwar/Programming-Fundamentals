#include<stdio.h>
#include<math.h>
int main(){
    int i = -1;
    float root1, root2;
    float a, b, c;
    int discriminant;
    printf("Enter Values : ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    int Discriminant_value = (b*b)-(4*a*c);
    if(a==0 || b==0 || c==0){
    printf("Values can't be zero");}
    else{
        if(Discriminant_value>0){
        root1 = ((-b+(sqrt(Discriminant_value)*i))/(2*a));
        root2 = ((-b-(sqrt(Discriminant_value)*i))/(2*a));
        printf("\nDisc : %d\nRoot 1 : %.2f\nRoot 2 : %.2f",Discriminant_value,root1,root2); }
        if(Discriminant_value==0){
        root1 = -b/(2*a);
        root2 = root1;
        printf("Root 1 : %.2lf\nRoot 2 : %.2lf",root1,root2);}
        if(Discriminant_value<0){
        root1 = ((-b+sqrt(Discriminant_value)))/(2*a);
        root2 = (-b-sqrt(Discriminant_value))/(2*a);
        printf("\nDisc : %d\nRoot 1 : %.2fi\nRoot 2 : %.2fi",Discriminant_value,root1,root2);}
    }
    return 0;
}
