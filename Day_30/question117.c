#include <stdio.h>
int main() {
    char names[3][30];
    int rolls[3];
    printf("--- Record Registration (3 Students) ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Enter Name for student %d (No spaces): ", i + 1);
        scanf("%s", names[i]);
        printf("Enter Roll Number: ");
        scanf("%d", &rolls[i]);
    }

    printf("\n--- Database Profile Logs ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Student #%d | Roll: %d | Name: %s\n", i + 1, rolls[i], names[i]);
    }
    return 0;
}