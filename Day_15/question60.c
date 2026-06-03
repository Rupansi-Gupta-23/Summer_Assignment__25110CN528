#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        if(a[i] != 0) {
            a[count++] = a[i];
        }
    }
    while(count < n) {
        a[count++] = 0;
    }
    printf("Array after moving zeros to end: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}