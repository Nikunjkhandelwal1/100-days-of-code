#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pge[n]; // previous greater elements

    for (int i = 0; i < n; i++) {
        int prev = -1; // default if no previous greater exists
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break; // nearest greater on the left
            }
        }
        pge[i] = prev;
    }

    // print in comma separated fashion
    for (int i = 0; i < n; i++) {
        if (i == 0)
            printf("%d", pge[i]);
        else
            printf(",%d", pge[i]);
    }

    return 0;
}
