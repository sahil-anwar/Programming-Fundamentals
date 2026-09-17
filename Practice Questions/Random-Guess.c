#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number, user_guess,count=0;
    int istrue ; //1-used for true in c-programming
    srand(time(0)); // seed the random number generator
    random_number = rand() % RAND_MAX + 1; // generate a random number between 1 and 32768

    printf("\nI'm thinking of a number between 1 and 32768. Can you guess what it is?\n");
    while (istrue=1) {
        printf("\nYour guess: ");
        scanf("%d", &user_guess);
        if (user_guess == random_number) {
            printf("\nCongratulations! You guessed the correct number!\n");
            break;//stop program user guess is correct
        } else if (user_guess > random_number) {
            printf("\nToo high, try again.\n");
        } else {
            printf("\nToo low, try again.\n");
        }
        count++;
    }
            printf("\nyou correct the random number in '%d guesses i.e : %d",count,random_number);
    return 0;
}
