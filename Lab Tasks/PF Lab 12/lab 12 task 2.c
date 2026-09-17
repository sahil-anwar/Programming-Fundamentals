#include <stdio.h>

float CalculateBill(int *fruitQuantities, float *fruitPrices, int numFruits) {
    float totalBill = 0.0;
	int i;
    for ( i = 0; i < numFruits; i++) {
        totalBill += *(fruitQuantities + i) * *(fruitPrices + i);
    }

    return totalBill;
}

int main() {
    float fruitPrices[] = {0.75, 0.60, 0.80, 1.20, 1.00};
    int fruitQuantities[] = {3, 2, 0, 0, 1}; 

    int numFruits = sizeof(fruitPrices) / sizeof(fruitPrices[0]);

    float totalBill = CalculateBill(fruitQuantities, fruitPrices, numFruits);

    printf("The total bill is: $%.2f\n", totalBill);

    return 0;
}

