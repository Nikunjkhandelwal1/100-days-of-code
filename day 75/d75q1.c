#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("info.txt", "a");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Clear input buffer before using fgets if needed (optional for some compilers)
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write text to file
    fputs(text, fp);

    fclose(fp);

    printf("Text successfully appended!\n");

    return 0;
}
