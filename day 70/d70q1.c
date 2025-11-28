#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Trim leading spaces (optional)
    while (str[i] == ' ') {
        i++;
    }

    // Convert first non-space character to uppercase
    if (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    // Convert rest of characters to lowercase
    for (; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s", str);
    return 0;
}
