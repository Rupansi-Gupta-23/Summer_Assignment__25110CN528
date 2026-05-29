#include <stdio.h>
int rev(int n, int rev_val) {
    if (n == 0) {
        return rev_val; 
    } else {
        return rev(n / 10, (rev_val * 10) + (n % 10)); 
    }
}
int main() {
    int n;
    printf("Enter a no.: ");
    scanf("%d", &n);
    printf("Reverse of number is %d", rev(n, 0)); 
    return 0;
}