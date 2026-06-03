#include <stdio.h>
int main() {
    int n, i, element, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to find its frequency: ");
    scanf("%d", &element);
    for(i = 0; i < n; i++) {
        if(a[i] == element)
            count++;
    }
    printf("Frequency of %d is %d.\n", element, count);
    return 0;
}