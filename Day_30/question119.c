#include <stdio.h>
int main() {
    char employeeNames[2][30] = {"Alice", "Bob"};
    int employeeIds[2] = {101, 102};
    printf("--- Active Employee Profiles ---\n");
    for(int i = 0; i < 2; i++) {
        printf("ID: %d \t Name: %s\n", employeeIds[i], employeeNames[i]);
    }
    return 0;
}