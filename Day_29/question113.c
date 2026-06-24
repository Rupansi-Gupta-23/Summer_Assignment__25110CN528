#include <stdio.h>
int main() {
    int choice;
    float num1, num2;
    printf("--- Menu Driven Calculator ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1: printf("Result: %.2f\n", num1 + num2); break;
        case 2: printf("Result: %.2f\n", num1 - num2); break;
        case 3: printf("Result: %.2f\n", num1 * num2); break;
        case 4: 
            if(num2 != 0) printf("Result: %.2f\n", num1 / num2);
            else printf("Error! Division by zero.\n");
            break;
        default: printf("Invalid Selection.\n");
    }
    return 0;
}