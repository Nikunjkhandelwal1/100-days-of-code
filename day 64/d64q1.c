#include <stdio.h>
#include <string.h>

int main() {
    char s[100000];
    scanf("%s", s);   // reads string without spaces

    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0; // start index of current window

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        // If character seen in current window, move start
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }

        lastIndex[ch] = i; // update last index of current char

        int currentLen = i - start + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("%d", maxLen);

    return 0;
}
