#include <stdio.h>

int main() {
    char str1[100], str2[100], concat[200];
    int i = 0, j = 0, k = 0, found = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Find length of strings
    while(str1[i] != '\0') i++;
    while(str2[j] != '\0') j++;

    // If lengths don't match, rotation is impossible
    if(i != j) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Create concatenated string: str1 + str1
    for(k = 0; k < i; k++)
        concat[k] = str1[k];
    for(k = 0; k < i; k++)
        concat[k + i] = str1[k];
    concat[2 * i] = '\0';

    // Check if str2 exists inside concat (simple substring check)
    for(k = 0; concat[k] != '\0'; k++) {
        int m = k, n = 0;
        while(concat[m] == str2[n] && str2[n] != '\0') {
            m++; n++;
        }
        if(str2[n] == '\0') {
            found = 1;
            break;
        }
    }

    if(found)
        printf("YES — The strings are rotations of each other.\n");
    else
        printf("NO — The strings are not rotations.\n");

    return 0;
}
