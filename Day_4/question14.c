#include <stdio.h>
int main() {
    int i, n, a=0, b=1, next;
    printf("Enter n: ");
    scanf("%d", &n);
    for( i=1; i <=n; i++){
        next = a + b;
        a = b;
        b = next;
    }
    printf("The nth Fibonacci term is: %d ", a);
    return 0;
}