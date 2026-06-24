#include <stdio.h>
struct Item {
    char name[30];
    int quantity;
};

int main() {
    struct Item inventory[2] = {{"Pens", 50}, {"Notebooks", 20}};
    int choice, addQty;
    printf("--- Current Store Inventory ---\n");
    for(int i = 0; i < 2; i++) {
        printf("%d. %s (Stock Count: %d)\n", i + 1, inventory[i].name, inventory[i].quantity);
    }
    printf("\nSelect Item ID to restock (1-2): ");
    scanf("%d", &choice);

    if(choice == 1 || choice == 2) {
        printf("Enter incoming additional quantity: ");
        scanf("%d", &addQty);
        inventory[choice - 1].quantity += addQty;
        printf("\n--- Updated Inventory Status ---\n");
        printf("%s Stock Count: %d\n", inventory[choice - 1].name, inventory[choice - 1].quantity);
    } else {
        printf("Product item not recognized.\n");
    }
    return 0;
}