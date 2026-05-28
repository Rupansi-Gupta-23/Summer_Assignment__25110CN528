#include <stdio.h>
int main() {
    int r, n, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n > 0){
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    if(rev == temp){
        printf("Entered number is Palindrome");
    } else {
        printf("Entered number is not Palindrome");
    }
    return 0;
}