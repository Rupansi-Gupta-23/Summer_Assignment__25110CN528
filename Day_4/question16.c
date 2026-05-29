#include <stdio.h>
int main() {
    int i, n, temp, r, sum;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Armstrong numbers in the range are: ");
    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            r = temp % 10;
            
            if (i < 10) {
                sum = sum + r;
            } else if (i < 100) {
                sum = sum + (r * r);
            } else {
                sum = sum + (r * r * r);
            }
            temp = temp / 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}