
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int seen[100000] = {0};  // assuming numbers are small enough

    for(int i = 0; i < n; i++){
        if(seen[arr[i]] == 1){
            printf("%d", arr[i]);   // repeated element found
            return 0;
        }
        seen[arr[i]] = 1;
    }

    // Ideally never reaches here since one duplicate is guaranteed
    printf("-1");
    return 0;
}
