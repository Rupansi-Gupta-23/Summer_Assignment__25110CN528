#include <stdio.h>
int palindrome(int n){
    int r, rev = 0;
    while(n > 0){
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    return rev;
}
int main(){
    int n, temp, result, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    result = palindrome(n);
    if(result == temp){
        printf("Entered number is Palindrome");
    } else {
        printf("Entered number is not Palindrome");
    }
    return 0;
}