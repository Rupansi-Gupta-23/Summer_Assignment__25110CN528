#include <stdio.h>
int Armstrong(int n){
    int r, sum = 0;
    while(n > 0){
        r = n % 10;
        sum = sum + r*r*r;
        n = n / 10;
    }
    return sum;
}
int main(){
    int result, n, sum = 0, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    result = Armstrong(n);
    if(result == num){
        printf("%d is Armstrong Number" , num);
    } else {
        printf("%d is not a Armstrong Number" , num);
    }
    return 0;
}