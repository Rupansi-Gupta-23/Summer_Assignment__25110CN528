#include <stdio.h>
#include <string.h>
#define MAX_WORDS 50
#define MAX_LEN 50
int main() {
    int n, i, j;
    char words[MAX_WORDS][MAX_LEN], temp[MAX_LEN];
    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar(); 
    printf("Enter words:\n");
    for (i = 0; i < n; i++) {
        gets(words[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}