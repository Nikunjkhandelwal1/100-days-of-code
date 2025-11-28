#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a full name: ");
    gets(str);

    // Print first letter (initial of first word)
    if(str[0] != ' ')
        printf("%c", str[0]);

    // Check remaining characters for word start
    while(str[i] != '\0') {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c", str[i + 1]);
        }
        i++;
    }

    return 0;
}
