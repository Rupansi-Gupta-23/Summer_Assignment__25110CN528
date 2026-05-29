#include <stdio.h>
int main() {
    int a, b, num1, num2, temp, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (num1 / gcd) * num2;
    printf("LCM of the two numbers is %d", lcm);
    return 0;
}