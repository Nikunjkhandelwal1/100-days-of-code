#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int nge[n];  // array to store next greater elements

    for (int i = 0; i < n; i++) {
        int next = -1;  // default if no greater element found
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;  // nearest greater element on the right
            }
        }
        nge[i] = next;
    }

    // print in comma separated fashion
    for (int i = 0; i < n; i++) {
        if (i == 0)
            printf("%d", nge[i]);
        else
            printf(",%d", nge[i]);
    }

    return 0;
}
