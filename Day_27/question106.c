#include <stdio.h>
struct Employee {
    int id;
    float salary;
};
int main() {
    struct Employee emp1, emp2;
    printf("--- Enter Employee 1 Details ---\n");
    printf("Enter ID: ");
    scanf("%d", &emp1.id);
    printf("Enter Salary: ");
    scanf("%f", &emp1.salary);

    printf("\n--- Enter Employee 2 Details ---\n");
    printf("Enter ID: ");
    scanf("%d", &emp2.id);
    printf("Enter Salary: ");
    scanf("%f", &emp2.salary);

    printf("\n--- Employee Records ---\n");
    printf("ID: %d, Salary: $%.2f\n", emp1.id, emp1.salary);
    printf("ID: %d, Salary: $%.2f\n", emp2.id, emp2.salary);
    return 0;
}