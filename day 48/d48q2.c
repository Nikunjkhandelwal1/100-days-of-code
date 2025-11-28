#include <stdio.h>

int main() {
    char str[200], temp;
    int i = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(str[i] != '\0') {

        if(str[i] == ' ') {
            end = i - 1;

            while(start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }

        i++;
    }

    end = i - 1;

    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("\nResult: %s\n", str);

    return 0;
}

