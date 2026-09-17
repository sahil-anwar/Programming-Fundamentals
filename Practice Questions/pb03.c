#include<stdio.h>
int main(){
    int arry[3][3]={{3,4,3},{5,3,2},{4,6,8}};
    int sum=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
        {
            printf("%d",arry[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            sum +=arry[i][j];
        }
        printf("\n");
    }
    printf("sum is: %d",sum);
return 0;
}