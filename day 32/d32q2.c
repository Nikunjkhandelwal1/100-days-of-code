#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int digit, maxFreq = 0, resultDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if(num < 0)
        num = -num;

    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            resultDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", resultDigit);

    return 0;
}
