#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;  // Sum of 1 to n

    for(int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2; // Sum from 1 to x
        int rightSum = totalSum - (x * (x - 1) / 2); // Sum from x to n

        if(leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
