#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i = 0, maxFreq = 0, maxChar = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }
    printf("Maximum occurring character: '%c' occurred %d times.\n", maxChar, maxFreq);
    return 0;
}