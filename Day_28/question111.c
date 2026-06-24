#include <stdio.h>
int main() {
    int choice, seats;
    float total = 0.0;
    printf("--- Ticket Booking System ---\n");
    printf("1. Standard Seat ($10.00)\n");
    printf("2. Premium Seat ($20.00)\n");
    printf("Select ticket tier (1-2): ");
    scanf("%d", &choice);

    printf("Enter total number of seats to book: ");
    scanf("%d", &seats);

    if (choice == 1) {
        total = seats * 10.00;
        printf("\nSuccessfully booked %d Standard seat(s).\n", seats);
    } else if (choice == 2) {
        total = seats * 20.00;
        printf("\nSuccessfully booked %d Premium seat(s).\n", seats);
    } else {
        printf("\nInvalid choice Selection!\n");
        return 0;
    }

    printf("Total Amount Due: $%.2f\n", total);
    return 0;
}