#include <stdio.h>

int main() {
    char str[200], longest[50], current[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(str[i] != '\0') {

        if(str[i] != ' ') {  
            current[j++] = str[i];
            currLen++;
        } else {
            current[j] = '\0';

            if(currLen > maxLen) {
                maxLen = currLen;
                for(int k = 0; k <= currLen; k++)
                    longest[k] = current[k];
            }

            j = 0;
            currLen = 0;
        }

        i++;
    }

    // Check last word as loop exits without checking
    current[j] = '\0';
    if(currLen > maxLen) {
        maxLen = currLen;
        for(int k = 0; k <= currLen; k++)
            longest[k] = current[k];
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
