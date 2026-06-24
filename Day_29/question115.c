#include <stdio.h>
#include <string.h>
int main() {
    int choice;
    char str1[100], str2[100];
    printf("--- String Operations Menu ---\n");
    printf("1. Find Length of String\n2. Concatenate/Combine Strings\n");
    printf("Enter selection: ");
    scanf("%d", &choice);
    printf("Enter main string: ");
    scanf("%s", str1);

    if(choice == 1) {
        printf("Length of string: %d\n", (int)strlen(str1));
    } 
    else if(choice == 2) {
        printf("Enter string to append: ");
        scanf("%s", str2);
        strcat(str1, str2);
        printf("Combined Result: %s\n", str1);
    } 
    else {
        printf("Invalid choice input.\n");
    }
    return 0;
}