#include <stdio.h>
int main() {
    int n, i, j, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Duplicate elements are:");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}