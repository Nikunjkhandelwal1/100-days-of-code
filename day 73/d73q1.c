#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if(fp == NULL) {
        printf("Error: File not found!");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        charCount++; // count each character

        // count lines
        if(ch == '\n') {
            lineCount++;
        }

        // detect words
        if(!isspace(ch) && inWord == 0) {
            inWord = 1;
            wordCount++;
        } else if(isspace(ch)) {
            inWord = 0;
        }
    }

    // If file doesn't end with newline, count last line
    if(charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(fp);

    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0;
}
