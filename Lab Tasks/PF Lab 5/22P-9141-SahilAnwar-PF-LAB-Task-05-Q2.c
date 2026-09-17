#include <stdio.h>

int main() {
    char Select;
    float TotalPrice = 500.0; 
    printf("Do you want a Burger? (Y/N): ");
    scanf(" %c", &Select);

    if (Select == 'Y' || Select == 'y') {
        char Add_On;
        printf("Do you want an add-on of fries and cold drink for 200 Rs only.? (Y/N):  ");
        scanf(" %c", &Add_On);

        if (Add_On == 'Y' || Add_On == 'y') {
            TotalPrice = TotalPrice + 200.0;
        } else if (Add_On== 'N' || Add_On == 'n') {
          
        } else {
            printf("Invalid Input\n");
            return 0;
        }
        printf("Total Price: %.2f\n", TotalPrice);
    } else if (Select == 'N' || Select == 'n') {
        
    } else {
        printf("Invalid Input\n");
        return 0;
    }
    return 0;
}

