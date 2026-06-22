#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp[200];
    int len1, len2;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 != len2) {
        printf("Strings are not rotations (different lengths).\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }
    return 0;
}