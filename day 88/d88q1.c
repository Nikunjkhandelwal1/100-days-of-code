#include <stdio.h>

enum Color {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    enum Color c;

    // Array of names corresponding to enum values
    char *names[] = { "RED", "GREEN", "BLUE", "YELLOW" };

    // Loop through enum values and print
    for (c = RED; c <= YELLOW; c++) {
        printf("%s = %d\n", names[c - 1], c);
    }

    return 0;
}
