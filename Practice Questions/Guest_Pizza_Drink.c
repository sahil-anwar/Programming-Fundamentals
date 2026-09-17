#include<stdio.h>
float DivAmount(int g){        
    int TotalAmount = 2500;   //Total_Amount
    if(g==-1){
        return -1;
    }
    if(g==0){
        return TotalAmount;
    }
    return 2500/g;
}
int DivPizza(int g){
    int TotalSlices = 24;    //Total_Slices  
    if(g>0 && g<=15){           
        return 24/g;
    }
    if(g<0){
        return -1;
    }
    if(g==0){
        return TotalSlices;
    }
}
int DivDrinks(int g){
    int TotalDrinks = 15;   //Total_Drinks
    if(g>0 && g<=15){           
        return (15/g)-1;
    }
    if(g==-1){
        return -1;
    }
    if(g==0){
        return TotalDrinks;
    }
}
int main()
{
    int Guest;
    printf("Enter_Number_of_Guests> ");  //Number_Of_Guests
    scanf("%d",&Guest);
    printf("Drinks> %d\n",DivDrinks(Guest));
    printf("Pizza> %d\n",DivPizza(Guest));
    printf("Amount> %.1f\n",DivAmount(Guest));
    return 0;
}
