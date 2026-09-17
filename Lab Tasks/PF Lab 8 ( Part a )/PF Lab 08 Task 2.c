#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    do {
        // Print the menu card
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        
        // Prompt the user to enter a choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform the selected operation
        if (choice == 1) {
            printf("Enter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %f\n", result);
        } else if (choice == 2) {
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %f\n", result);
        } else if (choice == 3) {
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %f\n", result);
        } else if (choice == 4) {
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result = %f\n", result);
            }
        } else if (choice == 5) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5); // Repeat until the user chooses to exit
    
    return 0;
}

