#include <stdio.h>

int main() {
    int arr[100], n, i, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search logic
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            return 0;  // Stop after found
        }
    }

    printf("Element not found.\n");
    return 0;
}

