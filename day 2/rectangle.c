#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);

    float area = 3.14 * r * r;
    float circumference = 2 * 3.14 * r;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}
