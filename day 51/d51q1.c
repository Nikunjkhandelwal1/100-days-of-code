#include <stdio.h>

int main() {
    int n, target, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence
    for(i = 0; i < n; i++){
        if(nums[i] == target){
            first = i;
            break;
        }
    }

    // Find last occurrence
    for(i = n - 1; i >= 0; i--){
        if(nums[i] == target){
            last = i;
            break;
        }
    }

    if(first == -1 && last == -1)
        printf("-1 -1");
    else
        printf("%d %d", first, last);

    return 0;
}
