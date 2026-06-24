#include <stdio.h>
int main() {
    int secret = 57; 
    int guess;
    printf("--- Number Guessing Game ---\n");
    printf("Guess the number between 1 and 100:\n");
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess > secret) {
            printf("Too high! Try again.\n\n");
        } else if (guess < secret) {
            printf("Too low! Try again.\n\n");
        } else {
            printf("Correct! You won the game.\n");
            break;
        }
    }
    return 0;
}