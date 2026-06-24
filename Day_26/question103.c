#include <stdio.h>
int main() {
    int choice;
    float balance = 1000.0; // Initial balance
    float amount;
    printf("--- ATM Simulation ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Current Balance: $%.2f\n", balance);
    } 
    else if (choice == 2) {
        printf("Enter deposit amount: ");
        scanf("%f", &amount);
        balance = balance + amount;
        printf("Updated Balance: $%.2f\n", balance);
    } 
    else if (choice == 3) {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);
        if (amount <= balance) {
            balance = balance - amount;
            printf("Updated Balance: $%.2f\n", balance);
        } else {
            printf("Insufficient funds!\n");
        }
    } 
    else {
        printf("Invalid choice!\n");
    }
    return 0;
}