#include <stdio.h>
int main() {
    char str[100];
    int count[256] = {0};
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        count[(int)str[i]]++;
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        if (count[(int)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            break;
        }
        i++;
    }
    if (str[i] == '\0') {
        printf("No non-repeating character found.\n");
    }
    return 0;
}