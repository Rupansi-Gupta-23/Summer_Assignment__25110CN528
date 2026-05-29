#include <stdio.h>
int fib(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fib(n - 1) + fib(n - 2); 
    }
}
int main() {
    int x, i, f;
    printf("Enter no. of elements: ");
    scanf("%d", &x);
    for (i = 0; i < x; i++) {
        f = fib(i);
        printf("%d ", f);
    }
    return 0;
}