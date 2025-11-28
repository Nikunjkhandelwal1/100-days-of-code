#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length manually
    while(str[j] != '\0') {
        j++;
    }
    j--;  // Move to last valid character

    // Swap characters
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
