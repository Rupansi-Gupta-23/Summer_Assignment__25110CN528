#include <stdio.h>
struct Book {
    int id;
    char title[50];
    float price;
};
int main() {
    struct Book library[3];
    printf("--- Library Management System ---\n");
    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &library[i].id);
        printf("Title (No spaces): ");
        scanf("%s", library[i].title);
        printf("Price: ");
        scanf("%f", &library[i].price);
    }

    printf("\n--- Registered Books Information ---\n");
    printf("ID\tTitle\t\tPrice\n");
    for(int i = 0; i < 3; i++) {
        printf("%d\t%s\t\t$%.2f\n", library[i].id, library[i].title, library[i].price);
    }
    return 0;
}