#include <stdio.h>
int main() {
    char str[200];
    int count = 0, i = 0;
    printf("Enter a sentence: ");
    gets(str);
    while (str[i] != '\0') {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
        i++;
    }
    printf("Number of words: %d\n", count);
    return 0;
}