#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcFile[50], destFile[50];
    int ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open/create destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy using fgetc and fputc
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully!\n");
    
    return 0;
}
