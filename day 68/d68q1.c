#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    // Missing number
    int missing = expectedSum - sum;

    printf("%d", missing);

    return 0;
}
