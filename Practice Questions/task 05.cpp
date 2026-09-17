#include<stdio.h>
int main(){
    int num = 85;
    int sum = 0;
    int count = 0;
    int j = 0;
    int i = 1;
    
    printf("First 5 digits with over 10 divisors are : \n");
    for(i = 1 ; i <= num ; i++){
        count = 0;
        sum = 0;
        for(j = 0 ; j <= i ; j++){
            sum += j;}
        for(int k = 1 ; k <= j ; k++){
        if(j%k==0){
            count++;
        if(count==10){
                printf("%d : ",sum);
            for(int n = 1; n<sum ; n++){
                if(sum%n==0){
                printf("%d ",n);
            } 
        }
            printf("\n");
        }
            }
            
        }
    }
    return 0;
}
