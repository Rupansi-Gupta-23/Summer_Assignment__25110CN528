
#include <stdio.h>
int main() {
    int i, n, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if( n <= 1 ){
        flag = 0;
    } else {
        for( i=2; i <= n/2; i++){
            if( n % i == 0){
                flag = 0;
                break;
            }
        }
    } if(flag == 1){
        printf("Number is Prime");
    } else {
        printf("Number is not Prime");
    } 
    return 0;
}