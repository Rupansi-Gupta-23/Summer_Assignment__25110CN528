#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[200];
    int i = 0, j = 0, count;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        char current_char = str[i];
        count = 1;
        i++;
        while (str[i] == current_char) {
            count++;
            i++;
        }
        result[j++] = current_char;
        if (count > 1) {
            j += sprintf(&result[j], "%d", count);
        }
    }
    result[j] = '\0';
    printf("Compressed string: %s\n", result);
    return 0;
}