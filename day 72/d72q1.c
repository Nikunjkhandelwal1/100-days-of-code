#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if(fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read and print each line until EOF
    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close file
    fclose(fp);

    return 0;
}
