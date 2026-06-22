#include <stdio.h>
int main() {
    char str[100];
    int count[256] = {0};
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        if (count[(int)str[i]] == 1) {
            printf("First repeating character: %c\n", str[i]);
            break;
        }
        count[(int)str[i]]++;
        i++;
    }
    if (str[i] == '\0') {
        printf("No repeating character found.\n");
    }
    return 0;
}