#include <stdio.h>

#define NUM_ROWS 10
#define NUM_SEATS 10

void print_seating_chart(int seats[NUM_ROWS][NUM_SEATS]) {
    printf("  ");
    for (int j = 0; j < NUM_SEATS; j++) {
        printf("%d ", j+1);
    }
    printf("\n");
    for (int i = 0; i < NUM_ROWS; i++) {
        printf("%d ", i+1);
        for (int j = 0; j < NUM_SEATS; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }
}

int reserve_seat(int seats[NUM_ROWS][NUM_SEATS], int row, int seat) {
    int i = row-1;
    int j = seat-1;
    if (i < 0 || i >= NUM_ROWS || j < 0 || j >= NUM_SEATS) {
        printf("Invalid row and seat number.Please try again.\n");
        return 0;
    }
    if (seats[i][j]) {
        printf("Seat is already taken.\n", row, seat);
        return 0;
    }
    seats[i][j] = 1;
    printf("Seat  reserved successfully.\n");
    return 1;
}

int main() {
    int seats[NUM_ROWS][NUM_SEATS] = {0};
    int num_reserved_seats = 0;
    int row, seat;
    //printf("Welcome to the movie theater!\n");
    while (1) {
       // print_seating_chart(seats);
        printf("Please enter the row  and seat number  to reserve (0 0 to stop) : ");
        scanf("%d %d", &row, &seat);
        if (reserve_seat(seats, row, seat)) {
            num_reserved_seats++;
        }
        //printf("Total number of reserved seats: %d\n", num_reserved_seats);
    }
    return 0;
}

