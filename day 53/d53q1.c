#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int totalSum = 0, leftSum = 0;

    for(int i = 0; i < n; i++){
        totalSum += arr[i];
    }

    for(int i = 0; i < n; i++){
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum){
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1");
    return 0;
}
