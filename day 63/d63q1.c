#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Sort the array using Bubble Sort (simple approach)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // If k is valid, print kth smallest
    if(k > 0 && k <= n) {
        printf("%d", arr[k - 1]);  // (k-1) because indexing starts from 0
    } else {
        printf("-1");  // Invalid k
    }

    return 0;
}
