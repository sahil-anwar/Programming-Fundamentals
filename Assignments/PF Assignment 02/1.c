#include <stdio.h>
void Union(int A1[], int A2[])
{
    int i, j, k = 0;
    int A3[100]={0};
    for (i = 0; i < 8; i++)//take first set element 
    {
        for (j = 0; j < 4; j++)//tske second set element
        {
                A3[k] = A1[i];//store first set eleemt to third set
                k++;
                A3[k] = A2[j];//store second set element to third set
                k++;
        }
    }
    for (i = 0; i < k; i++)
    {                           
        for (j = 0; j < k - 1; j++)
        {
            if (A3[j] > A3[j+1])
            {
                int SWAP = A3[j];
                A3[j] = A3[j+1 ];
                A3[j +1 ] = SWAP;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        int flag = 0;
        for (j = 0; j < i; j++)
        {
            if (A3[i] == A3[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", A3[i]);
        }
    }
}
 
int main()
{ 
 int A1[] = {1, 2, 3, 4, 5, 6, 3, 2};  //First_Set_Of_Element
 //Second_Set_Of_Element
int A2[] = {1, 3, 5, 7};
    Union(A1, A2);  //CallingFunction
    return 0;
}