#include <stdio.h>
int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 2, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;
    int maxElement;
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    printf("Maximum frequency element is: %d (appears %d times)\n", maxElement, maxCount);
    return 0;
}