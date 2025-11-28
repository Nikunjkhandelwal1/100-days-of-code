#include <stdio.h>

int main() {
    int arr[100], n, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    i = n - 1;

    while(i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
