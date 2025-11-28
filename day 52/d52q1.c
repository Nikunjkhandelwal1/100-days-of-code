#include <stdio.h>

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int result = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= x) {
            result = mid;  
            high = mid - 1; // check for first occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("%d", result);

    return 0;
}
