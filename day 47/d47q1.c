#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0}, i = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Count frequency from first string
    while(str1[i] != '\0') {
        freq[str1[i] - 'a']++;
        i++;
    }

    i = 0;

    // Subtract frequency using second string
    while(str2[i] != '\0') {
        freq[str2[i] - 'a']--;
        i++;
    }

    // Check if all frequencies are zero
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("Strings ARE anagrams.\n");
    return 0;
}
