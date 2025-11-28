#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    // File exists, display content
    printf("\n--- File Content ---\n");
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
