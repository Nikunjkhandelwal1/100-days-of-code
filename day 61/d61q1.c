#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1");
        return 0;
    }

    // For each window starting at i
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;   // default = 0 if no negative found
        int found = 0;

        // Check elements in current window arr[i ... i+k-1]
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                found = 1;
                break;      // first negative found
            }
        }

        if (!found) {
            firstNeg = 0;
        }

        printf("%d ", firstNeg);
    }

    return 0;
}
