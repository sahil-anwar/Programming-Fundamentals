#include <stdio.h>

int secondMax(int *arr, int size) {
	int i;
    int max = *arr;
    int secondMax = *arr; 

  
    for ( i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            secondMax = max;
            max = *(arr + i);
        } else if (*(arr + i) > secondMax) {
            secondMax = *(arr + i);
        }
    }
    return secondMax;
}

int main() {
    int arr[10];
	int i;
    printf("Enter 10 integers:\n");

    for ( i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int result = secondMax(arr, 10);
    printf("The second maximum is: %d\n", result);

    return 0;
}

