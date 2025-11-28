#include <stdio.h>

int main() {
    int arr[100], n;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -999999;  // Initial values can also be arr[0] based on logic

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -999999) {
        printf("No second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
