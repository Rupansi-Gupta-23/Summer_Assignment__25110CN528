#include <stdio.h>
int main() {
    float basic, allowance, deduction, net_salary;
    printf("Enter Basic Salary: $");
    scanf("%f", &basic);

    allowance = basic * 0.20; // 20% allowance bonus
    deduction = basic * 0.10; // 10% tax/provident deduction

    // Formula: Basic Pay + Allowances - Deductions
    net_salary = basic + allowance - deduction;

    printf("\n--- Salary Statement ---\n");
    printf("Basic Salary : $%.2f\n", basic);
    printf("Allowance    : $%.2f\n", allowance);
    printf("Deductions   : $%.2f\n", deduction);
    printf("-------------------------\n");
    printf("Net Salary   : $%.2f\n", net_salary);

    return 0;
}