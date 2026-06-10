#include <stdio.h>
int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 16; 
    int found = 0;
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if(!found) {
        printf("No pair found with sum %d\n", sum);
    }
    return 0;
}