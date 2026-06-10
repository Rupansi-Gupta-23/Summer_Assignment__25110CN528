#include <stdio.h>
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1; 
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    int missingNumber = total - sum;
    printf("Missing number is: %d\n", missingNumber);
    return 0;
}