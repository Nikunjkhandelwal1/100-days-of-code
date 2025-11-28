#include <stdio.h>

int main() {
    char bin[50];
    scanf("%s", bin);

    for(int i = 0; bin[i] != '\0'; i++) {
        if(bin[i] == '0')
            bin[i] = '1';
        else
            bin[i] = '0';
    }

    printf("%s", bin);

    return 0;
}
