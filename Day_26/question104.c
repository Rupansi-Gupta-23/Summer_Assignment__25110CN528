#include <stdio.h>
int main() {
    int ans1, ans2;
    int score = 0;
    printf("--- Simple Quiz Application ---\n\n");
    printf("Q1. What is the capital of France?\n");
    printf("1. Berlin  2. Paris  3. Rome\n");
    printf("Enter your answer (1-3): ");
    scanf("%d", &ans1);
    if (ans1 == 2) {
        score++;
    }
    printf("Q2. Which language are we using right now?\n");
    printf("1. Python  2. Java  3. C Language\n");
    printf("Enter your answer (1-3): ");
    scanf("%d", &ans2);
    if (ans2 == 3) {
        score++;
    }
    printf("\nQuiz Finished! Your Total Score: %d/2\n", score);
    return 0;
}