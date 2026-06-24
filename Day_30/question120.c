#include <stdio.h>
// Global array structure context for simplicity 
char dynamicDirectory[3][50] = {"John_Doe", "Jane_Smith", "Empty"};

// Function implementation block to handle viewing
void showDirectory() {
    printf("\n--- Current Directory List ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Slot %d: %s\n", i + 1, dynamicDirectory[i]);
    }
}

// Function implementation block to update entries
void updateSlot(int slot) {
    if(slot >= 1 && slot <= 3) {
        printf("Enter new name for Slot %d: ", slot);
        scanf("%s", dynamicDirectory[slot - 1]);
        printf("Directory updated!\n");
    } else {
        printf("Invalid slot option layout.\n");
    }
}
int main() {
    int choice, targetSlot;
    while(1) {
        printf("\n=== CONTACT BOOK MINI-PROJECT ===\n");
        printf("1. View Contact Book Directory\n");
        printf("2. Edit an Entry Slot\n");
        printf("3. Close Application System\n");
        printf("Select choice: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            showDirectory();
        } 
        else if(choice == 2) {
            printf("Enter slot position to alter (1-3): ");
            scanf("%d", &targetSlot);
            updateSlot(targetSlot);
        } 
        else if(choice == 3) {
            printf("Exiting system dashboard safely.\n");
            break;
        } 
        else {
            printf("Command selection error! Try again.\n");
        }
    }
    return 0;
}