#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0, found = 0;

    printf("Enter a lowercase string: ");
    gets(str);

    while(str[i] != '\0') {
        int index = str[i] - 'a';

        if(freq[index] == 1) {
            printf("First repeating character: %c\n", str[i]);
            found = 1;
            break;
        }

        freq[index]++;
        i++;
    }

    if(!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
