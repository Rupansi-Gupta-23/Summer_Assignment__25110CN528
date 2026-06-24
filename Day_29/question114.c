#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int choice, pos, val;
    printf("Current Array: ");
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    
    printf("\n\n--- Array Operations ---\n");
    printf("1. Read/Display Element\n2. Update Element\n");
    printf("Enter operational choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter index position to view (0-4): ");
        scanf("%d", &pos);
        if(pos >= 0 && pos < 5) printf("Value at index %d is %d\n", pos, arr[pos]);
        else printf("Out of bounds index!\n");
    } 
    else if(choice == 2) {
        printf("Enter index position to update (0-4): ");
        scanf("%d", &pos);
        if(pos >= 0 && pos < 5) {
            printf("Enter new value: ");
            scanf("%d", &val);
            arr[pos] = val;
            printf("Updated Array: ");
            for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
            printf("\n");
        } else {
            printf("Out of bounds index!\n");
        }
    } 
    else {
        printf("Invalid Setup Choice.\n");
    }
    return 0;
}