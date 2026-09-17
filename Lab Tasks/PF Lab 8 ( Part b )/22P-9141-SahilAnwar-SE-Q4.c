#include <stdio.h>

void findTwoNumbers(int arr[], int size, int target) {
	int i,j;
    for ( i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d + %d = %d\n", arr[i], arr[j], target);
                return;  
            }
        }
    }
    printf("No valid pair found.\n");
}

int main() {
    int size, i,target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target value: ");
    scanf("%d", &target);

    findTwoNumbers(arr, size, target);

    return 0;
}

