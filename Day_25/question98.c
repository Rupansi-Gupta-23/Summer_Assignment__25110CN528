#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int hash1[256] = {0}, hash2[256] = {0};
    int i = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    i = 0;
    while (str1[i] != '\0') {
        hash1[(int)str1[i]] = 1;
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        hash2[(int)str2[i]] = 1;
        i++;
    }
    printf("Common characters: ");
    for (i = 0; i < 256; i++) {
        if (hash1[i] && hash2[i]) {
            printf("%c ", (char)i);
        }
    }
    printf("\n");
    return 0;
}