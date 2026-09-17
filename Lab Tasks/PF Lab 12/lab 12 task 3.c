#include <stdio.h>

int main() {
    int cakesSold[] = {20, 15, 25, 10, 18, 12}; // Cakes sold per day

    int numCakes = sizeof(cakesSold) / sizeof(cakesSold[0]);

    int totalCakesSold = 0;
	int i;
    for ( i = 0; i < numCakes; i++) {
        totalCakesSold += *(cakesSold + i);
    }

    int PerWeek = totalCakesSold * 7;

    printf("The total number of cakes sold per week is: %d\n", PerWeek);

    return 0;
}

