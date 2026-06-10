#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int unionArr[size1 + size2]; 
    int j = 0;
    for(int i = 0; i < size1; i++) {
        unionArr[j++] = arr1[i];
    }
    for(int i = 0; i < size2; i++) {
        int duplicate = 0;
        for(int k = 0; k < j; k++) {
            if(arr2[i] == unionArr[k]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            unionArr[j++] = arr2[i];
        }
    }
    printf("Union of arrays: ");
    for(int i = 0; i < j; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}