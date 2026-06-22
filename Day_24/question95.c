#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200], word[50];
    int max_length = 0, current_length = 0, i = 0, start = 0;
    char longest_word[50];
    printf("Enter a sentence: ");
    gets(sentence);
    int len = strlen(sentence);
    for (i = 0; i <= len; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                strncpy(longest_word, &sentence[start], current_length);
                longest_word[current_length] = '\0';
            }
            current_length = 0;
            start = i + 1;
        }
    }
    printf("Longest word: %s\n", longest_word);
    return 0;
}