#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int Number1, Number2;
    int DiceOne = 0, DiceTwo = 0;
    int Sum = 0;
    int n = 0;
    int High = 6;
    int Low = 1;
    int Store;
    int Answer2 = 0, Answer3 = 0, Answer4 = 0, Answer5 = 0, Answer6 = 0, Answer7 = 0, Answer8 = 0, Answer9 = 0, Answer10 = 0, Answer11 = 0, Answer12 = 0;
    int a[6][6] = {{1,2,3,4,5,6},{1,2,3,4,5,6}};
    srand(time(0));
    while (n%2==0 || n<1000){
        Sum = 0;
        DiceOne = rand()%(High-Low+1)+Low;
        DiceTwo = rand()%(High-Low+1)+Low;
        
        printf("DiceOne = %d, DiceTwo = %d\n",DiceOne,DiceOne);
        //printf("\n%d\n",a[DiceOne][DiceTwo]);
        Sum = Sum + (DiceOne+DiceTwo);
        printf("Sum of DiceOne and DiceTwo : %d\n",Sum);

        n++;
        
        switch (Sum){
            case 2:
                Answer2++;
                break;
            case 3:
                Answer3++;
                break;
            case 4:
                Answer4++;
                break;
            case 5:
                Answer5++;
                break;
            case 6:
                Answer6++;
                break;
            case 7:
                Answer7++;
                break;
            case 8:
                Answer8++;
                break;
            case 9:
                Answer9++;
                break;
            case 10:
                Answer10++;
                break;
            case 11:
                Answer11++;
                break;
            case 12:
                Answer12++;
                break;
            default:
                break;
        }
    }
    printf("Number of times the Set of Outcome Came : \n");
    printf("Outcome 2 came %d\nOutcome 3 came %d\nOutcome 4 came %d\nOutcome 5 came %d\nOutcome 6 came %d\nOutcome 7 came %d\n",Answer2,Answer3,Answer4,Answer5,Answer6,Answer7);
    printf("Outcome 8 came %d\nOutcome 9 came %d\nOutcome 10 came %d\nOutcome 11 came %d\nOutcome 12 came %d",Answer8,Answer9,Answer10,Answer11,Answer12);

    return 0;
}