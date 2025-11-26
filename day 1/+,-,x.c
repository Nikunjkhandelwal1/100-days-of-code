#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, diff, product, quotient);

    return 0;
}
