#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n; // Handle cases where k > n

    // Rotate using reverse method
    for(int i = 0; i < k; i++) {
        int temp = arr[n - 1];
        for(int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
