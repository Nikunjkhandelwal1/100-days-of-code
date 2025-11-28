#include <stdio.h>

int main() {
    int arr[100], n, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n) {
        printf("Invalid position.\n");
        return 0;
    }

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
