#include <stdio.h>
#include <string.h>
#define MAX_NAMES 50
#define MAX_LEN 50
int main() {
    int n, i, j;
    char names[MAX_NAMES][MAX_LEN], temp[MAX_LEN];
    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); 
    printf("Enter names:\n");
    for (i = 0; i < n; i++) {
        gets(names[i]);
    }
    for (i = 0; i < n -1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("Names sorted alphabetically:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}