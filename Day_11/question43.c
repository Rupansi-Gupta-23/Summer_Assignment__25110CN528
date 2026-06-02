#include <stdio.h>
int prime(int n){
    int i, flag = 1;
    if( n <= 1 ){
        flag = 0;
    } else {
        for( i=2; i <= n/2; i++){
            if( n % i == 0){
                flag = 0;
                break;
            }
        }
    } 
    return flag;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(prime(n) == 1){
        printf("Number is Prime");
    } else {
        printf("Number is not Prime");
    } 
    return 0;
}