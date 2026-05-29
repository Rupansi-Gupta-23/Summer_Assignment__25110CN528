#include <stdio.h>
int main() {
    int num, maxPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp % 2 == 0) {
        maxPrime = 2;
        temp /= 2;
    }
    for (int i = 3; i <= temp; i += 2) {
        while (temp % i == 0) {
            maxPrime = i;
            temp /= i;
        }
    }
    if (maxPrime != -1) {
        printf("The largest prime factor of %d is: %d", num, maxPrime);
    } else {
        printf("%d does not have any prime factors.", num);
    }
    return 0;
}