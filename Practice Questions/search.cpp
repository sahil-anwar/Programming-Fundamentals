#include <stdio.h>

#define MaximumSize 100  

int main()
{
    int arr[MaximumSize];
    int size, i, Search , Found;


    printf("Size of Array: ");
    scanf("%d", &size);

    
    printf("Enter Elements In Array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter Element to Search: ");
    scanf("%d", &Search);

   
    Found = 0; 
    
    for(i=0; i<size; i++)
    {
     
        if(arr[i] == Search)
        {
            Found = 1;
            break;
        }
    }

  
    if(Found == 1)
    {
        printf("\n%d Is Found At Position %d", Search, i + 1);
    }
    else
    {
        printf("\n%d Is Not Found In The Array", Search);
    }

    return 0;
}