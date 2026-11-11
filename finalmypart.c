#include <stdio.h>

#define ROWS 5
#define COLS 10

// Function to set all seats to 'O' (Available)
void initializeSeats(char seats[ROWS][COLS]) {
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            seats[i][j] = 'O';
        }
    }
}

// Function to print the railway coach layout
void displaySeats(char seats[ROWS][COLS]) {
    int i, j;
    printf("===============================================\n");
    printf("              INDIAN RAILWAYS\n");
    printf("             COACH SEAT LAYOUT\n");
    printf("===============================================\n\n");

    //printf("\n--- RAILWAY COACH SEAT LAYOUT ---\n");
    //printf("       ");
    
    // Print column numbers
    for (j = 0; j < COLS; j++) {
        printf("%d ", j + 1);
    }
    printf("\n");

    // Print rows with seat status
    for (i = 0; i < ROWS; i++) {
        printf("Row %d  ", i + 1);
        
        for (j = 0; j < COLS; j++) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }
    printf("\nO = Available   X = Booked\n");
}

// Function to count and show available and booked seats
void showAvailability(char seats[ROWS][COLS]) {
    int i, j;
    int available = 0;
    int booked = 0;

    // Loop through the array to check seat status
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (seats[i][j] == 'O') {
                available++;
            } else {
                booked++;
            }
        }
    }

    // Using ROWS * COLS instead of typing 50 manually
    printf("\nTotal Seats: %d\n", ROWS * COLS);
    printf("Available Seats: %d\n", available);
    printf("Booked Seats: %d\n", booked);
}

int main() {
    char seats[ROWS][COLS];
    int choice;

    // Setup the initial empty coach
    initializeSeats(seats);
       printf("======== WELCOME TO RAILRESERVE !! ========\n\n");
    // Menu loop
    do {
        printf("\n--- SEAT MENU ---\n");
        printf("1. View Seat Layout/Availabilty\n");
        printf("2. Book a Ticket\n");
        printf("3. Cancel a Ticket\n");
        printf("4. Search / Display Ticket Details\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // Standard if-else ladder that professors expect to see
        if (choice == 1) {
            displaySeats(seats);
        } 
        else if (choice == 2) {
            showAvailability(seats);
        } 
        else if (choice == 3) {
            printf("\n"); // make a Cancel book ticket funtion connetion here('-')
        }
        else if (choice == 4) {
            printf("\n"); // Search funtion ticket here !
        }
        else if (choice == 5) {
            printf("Exiting program...\n");
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}