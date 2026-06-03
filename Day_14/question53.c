#include <stdio.h>
int main() {
    int n, i, key, index = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            index = i;
            break;
        }
    }
    if(index != -1)
        printf("Element %d found at index %d.", key, index);
    else
        printf("Element %d not found in the array.", key);
    return 0;
}