#include <stdio.h>
int perfectnum(int num){
    int sum = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = perfectnum(num);
    if(result == num && num > 0) {
        printf("%d is a Perfect Number.", num);
    } else {
        printf("%d is NOT a Perfect Number.", num);
    }
    return 0;
}