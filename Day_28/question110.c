#include <stdio.h>
int main() {
    int accNo;
    char holder[50];
    float balance;

    printf("--- Bank Account Registration ---\n");
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Account Holder Name: ");
    scanf("%s", holder);
    printf("Enter Initial Deposit Balance: $");
    scanf("%f", &balance);

    printf("\n--- Account Created Successfully ---\n");
    printf("Account Number: %d\n", accNo);
    printf("Holder Name   : %s\n", holder);
    printf("Current Balance: $%.2f\n", balance);

    return 0;
}