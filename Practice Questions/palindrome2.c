#include<stdio.h>
#include<string.h>

int palindrome(char a[], char b[]){
    int compare = strcmp(b,a);
    printf("%d\n",compare);
    return compare;
}

int main(){
    int size = 5;
    char alpha[5] = "AMMA";
    char beta[5];
    char a,b;
    
    int j = 3;
    for (int i = 0; i < 4; i++)
    {
        printf("%c",alpha[i]);
        a = alpha[i];
        beta[j] = a;
        j--;
    
    }

    printf("\nExecuted the first Array\n");
    for (int j = 0; j<=4 ; j++)
    {
        printf("%c",beta[j]);
    }
    printf("\nExecuted the Second Array in Reverse \n");

    int compare = palindrome(alpha,beta);
    
    if(compare!=0){
        printf("It is not a Palindrome\n");
    }
    else{
        printf("It is a Palindrome\n");
    }

    return 0;
}