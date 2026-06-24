#include <stdio.h>
int main() {
    char books[3][50] = {"C_Programming", "Physics_Vol1", "Calculus_Basics"};
    int choice;
    printf("--- Mini Library Catalog ---\n");
    for(int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }
    printf("\nEnter book number to checkout (1-3): ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 3) {
        printf("Success! You checked out: %s\n", books[choice - 1]);
    } else {
        printf("Book reference choice not found.\n");
    }
    return 0;
}