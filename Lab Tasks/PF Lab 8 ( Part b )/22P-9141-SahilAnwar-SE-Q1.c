#include <stdio.h>

int findMaxProfit(int prices[], int size) {
    if (size < 2)
        return 0;

    int i,minPrice = prices[0];
    int maxProfit = 0;

    for ( i = 1; i < size; i++) {
        int currentPrice = prices[i];
        int currentProfit = currentPrice - minPrice;

        if (currentProfit > maxProfit)
            maxProfit = currentProfit;

        if (currentPrice < minPrice)
            minPrice = currentPrice;
    }

    return maxProfit;
}

int main() {
    int i,size;
    printf("Enter the number of stock prices: ");
    scanf("%d", &size);

    int prices[size];
    printf("Enter the stock prices:\n");
    for (i = 0; i < size; i++) {
        printf("Price %d: ", i + 1);
        scanf("%d", &prices[i]);
    }

    int maxProfit = findMaxProfit(prices, size);

    printf("Maximum profit: %d\n", maxProfit);

    return 0;
}

