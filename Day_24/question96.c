#include <stdio.h>
int main() {
    char str[100], result[100];
    int hash[256] = {0};
    int i = 0, j = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        if (hash[(int)str[i]] == 0) {
            result[j++] = str[i];
            hash[(int)str[i]] = 1;
        }
        i++;
    }
    result[j] = '\0';
    printf("String after removing duplicates: %s\n", result);
    return 0;
}