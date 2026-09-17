#include<stdio.h>

int main() {
    int Quantity;
    float Price;
    float Cost;
    char Currency;
    
    printf("Enter The Price: ");
    scanf("%f", &Price);
    
    printf("\nEnter The Quantity: ");
    scanf("%d", &Quantity);
    
    printf("Enter The Currency (USD='u/U' or EUR='e/E'): ");
    scanf(" %c", &Currency);

    if (Currency == 'u' || Currency == 'U') {
        Cost = (float)Quantity * Price;
    } else if (Currency == 'e' || Currency == 'E') { 
       
        float Temp = 0.2 * Price;
        float NewPrice = Price + Temp;
        Cost = NewPrice * (float)Quantity;
    } else {
        printf("Invalid currency");
        return 0;
    }

    
    if (Cost >= 1000) {
        
        float Discount = 0.1 * Cost;
        float NewCost = Cost - Discount;
        printf("Total Cost: %.2f", NewCost);
    } else if (Cost >= 500) {
        
        float Discount = 0.05 * Cost;
        float NewCost = Cost - Discount;
        printf("Total Cost: %.2f", NewCost);
    } else {
        printf("Total Cost: %.2f", Cost);
    }

    return 0;
}

