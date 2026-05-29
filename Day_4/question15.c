#include <stdio.h>
int main() {
    int r, n, sum = 0, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(n > 0){
        r = n % 10;
        sum = sum + r*r*r;
        n = n / 10;
    }
    if(sum == num){
        printf("%d is Armstrong Number" , num);
    } else {
        printf("%d is not a Armstrong Number" , num);
    }
    return 0;
}