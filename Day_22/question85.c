#include <stdio.h>
int main() {
    char str[100];
    int length = 0, i, is_palindrome = 1;
    printf("Enter a string: ");
    gets(str);
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}