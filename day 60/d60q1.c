#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if(k > n || k <= 0){
        printf("-1");
        return 0;
    }

    // Iterate for each window
    for(int i = 0; i <= n - k; i++){
        int max = arr[i];

        // Find max in subarray arr[i...i+k-1]
        for(int j = i + 1; j < i + k; j++){
            if(arr[j] > max){
                max = arr[j];
            }
        }

        // Print the maximum for this window
        printf("%d ", max);
    }

    return 0;
}
