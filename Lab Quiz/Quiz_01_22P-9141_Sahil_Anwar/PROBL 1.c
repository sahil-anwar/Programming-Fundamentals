#include<stdio.h>

int main()
{
    int arr[7], second minimum, i;
    printf("Enter 7 Array Elements: ");
    for(i=0; i<=7; i++)
        scanf("%d", &arr[i]);
    i=0;
    small=arr[i++];
    while(i<7)
    {
        if(small>arr[i++])
            small = arr[i++];
        i++;
    }
    printf("\nSmallest Number = %d", second minimum);
    return 0;
}
