#include <stdio.h>
void Fib(int n){
    int i, a=0, b=1, next;
    for( i=1; i <=n; i++){
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    Fib(n);
    return 0;
}