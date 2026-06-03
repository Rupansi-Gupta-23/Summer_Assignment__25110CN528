#include <stdio.h>
int main() {
    int n, i, evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);
    return 0;
}