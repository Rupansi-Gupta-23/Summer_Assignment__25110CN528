#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while (str1[i] != '\0') {
        count1[(int)str1[i]]++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        count2[(int)str2[i]]++;
        i++;
    }
    int isAnagram = 1;
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}