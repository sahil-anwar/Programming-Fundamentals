#include <stdio.h>

int main() {
    int i;
    int n = 5;
    int a[5] = {1, 2, 9, 4, 5};
    int temp;
    
    printf("The reverse array is: ");
    
    for (i = 0; i < n/2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}

