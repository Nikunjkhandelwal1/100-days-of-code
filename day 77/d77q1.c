#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    // Open input file in read mode
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: input.txt cannot be opened.\n");
        return 1;
    }

    // Open output file in write mode
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: output.txt cannot be created.\n");
        fclose(input);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion completed. Check output.txt\n");

    return 0;
}
