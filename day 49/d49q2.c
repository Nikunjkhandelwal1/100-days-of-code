#include <stdio.h>

int main() {
    char str[100];
    int i = 0, lastSpace = -1;

    printf("Enter full name: ");
    gets(str);

    // Find last space (surname start)
    while(str[i] != '\0') {
        if(str[i] == ' ')
            lastSpace = i;
        i++;
    }

    // Print initials (for all names except last one)
    if(str[0] != ' ')
        printf("%c. ", str[0]);

    for(i = 1; str[i] != '\0'; i++) {
        if(str[i] == ' ' && i < lastSpace)
            printf("%c. ", str[i + 1]);
    }

    // Print surname in full
    printf("%s\n", &str[lastSpace + 1]);

    return 0;
}
