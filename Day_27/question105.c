#include <stdio.h>
int main() {
    int roll[3];
    float marks[3];
    printf("--- Enter Records for 3 Students ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter Roll Number for student %d: ", i + 1);
        scanf("%d", &roll[i]);
        printf("Enter Marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    printf("\n--- Displaying Student Records ---\n");
    printf("Roll No\tMarks\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%.2f\n", roll[i], marks[i]);
    }
    return 0;
}