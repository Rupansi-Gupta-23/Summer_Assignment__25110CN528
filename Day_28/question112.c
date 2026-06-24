#include <stdio.h>
struct Contact {
    char name[40];
    char phone[15];
};
int main() {
    struct Contact directory[2];
    printf("--- Contact Management System ---\n");
    for(int i = 0; i < 2; i++) {
        printf("Enter Name for contact %d: ", i + 1);
        scanf("%s", directory[i].name);
        printf("Enter Phone Number: ");
        scanf("%s", directory[i].phone);
    }

    printf("\n--- Saved Contact Cards ---\n");
    for(int i = 0; i < 2; i++) {
        printf("Contact %d: %s -> %s\n", i + 1, directory[i].name, directory[i].phone);
    }
    return 0;
}