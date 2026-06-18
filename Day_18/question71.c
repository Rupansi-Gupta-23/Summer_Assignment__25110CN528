#include <stdio.h>
int main() {
    int arr[] = {2, 4, 7, 10, 15, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int low = 0, high = n - 1;
    int mid, result = -1;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] == key) {
            result = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if(result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);
    return 0;
}