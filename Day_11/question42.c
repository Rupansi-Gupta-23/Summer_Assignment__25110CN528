#include <stdio.h>
int max(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}
int main(){
    int num1, num2, Maximum;
    printf("Enter two numbers:");
    scanf( "%d %d", &num1, &num2);
    Maximum = max(num1, num2);
    printf("Maximum of two numbers is %d", Maximum);
    return 0;
}