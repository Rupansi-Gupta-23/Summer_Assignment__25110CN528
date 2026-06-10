#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp[size];
    int j = 0;
    for(int i = 0; i < size; i++) {
        int duplicate = 0;
        for(int k = 0; k < j; k++) {
            if(arr[i] == temp[k]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            temp[j++] = arr[i];
        }
    }
    printf("Array after removing duplicates: ");
    for(int i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    return 0;
}