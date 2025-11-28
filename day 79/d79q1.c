#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;  // long long to handle large sums

    fp = fopen("numbers.txt", "r");

    if(fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers until EOF
    while(fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if(count == 0) {
        printf("No numbers found in file.\n");
    } else {
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", (float)sum / count);
    }

    return 0;
}
