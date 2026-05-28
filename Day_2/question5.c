#include <stdio.h>
int main() {
    int r, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("Sum of digits of the number is %d" , sum);
    return 0;
}