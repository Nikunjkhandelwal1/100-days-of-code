#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[j] != '\0') {
        j++;
    }
    j--; // Move to the last character

    while(i < j) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
