#include <stdio.h>
int main() {
    int r, n, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
        r = n % 10;
        prod = prod * r;
        n = n / 10;
    }
    printf("Product of digits of the number is %d" , prod);
    return 0;
}