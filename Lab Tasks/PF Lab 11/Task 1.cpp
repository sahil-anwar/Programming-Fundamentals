#include <stdio.h>

#define ROWS 10
#define SEATS 10

void print_seating_table(int seats[ROWS][SEATS])
 {

}

int reserve_seat(int seats[ROWS][SEATS], int row, int seat) {
    int i = row-1;
    int j = seat-1;
    if (i < 0 || i >= ROWS || j < 0 || j >= SEATS) {
        printf("Invalid row and seat number. Please try again.\n");
        return 0;
    }
    if (seats[i][j]) {
        printf("Seat is already taken.\n");
        return 0;
    }
    seats[i][j] = 1;
    printf("Seat reserved successfully.\n");
    return 1;
}

int main() {
    int seats[ROWS][SEATS] = {0};
    int num_resv_seats = 0;
    int row, seat;
    
    
    while (1) {
        print_seating_table(seats);
        printf("Please enter the row and seat number to reserve (0 0 to stop): ");
        scanf("%d %d", &row, &seat);
        if (row == 0 && seat == 0) {
            break;
        }
        if (reserve_seat(seats, row, seat)) {
            num_resv_seats++;
        }
    }
    printf("Total number of reserved seats: %d\n", num_resv_seats);
    return 0;
}

