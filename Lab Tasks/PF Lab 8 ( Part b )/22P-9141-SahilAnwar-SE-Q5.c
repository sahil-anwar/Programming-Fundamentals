
#include <stdio.h>
#include <stdlib.h>

int candy(int ratings[], int n) {
    int i,candies[n];
    for ( i = 0; i < n; i++) {
        candies[i] = 1;
    }
    
    
    for ( i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }
    
    
    for ( i = n - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1]) {
            candies[i] = candies[i + 1] + 1;
        }
    }
    
   
    int totalCandies = 0;
    for ( i = 0; i < n; i++) {
        totalCandies += candies[i];
    }
    return totalCandies;
}

int main() {
    int n,i;
    printf("Enter the number of children: ");
    scanf("%d", &n);
    int ratings[n];
    printf("Enter the ratings for each child:\n");
    for ( i = 0; i < n; i++) {
        printf("Child %d: ", i+1);
        scanf("%d", &ratings[i]);
    }
    
    int minCandies = candy(ratings, n);
    printf("Minimum number of candies required: %d\n", minCandies);
    return 0;
}

