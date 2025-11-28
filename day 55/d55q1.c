#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long t = n * (n + 1) / 2;   // t = n(n+1)/2

    long long x = (long long)sqrt((long double)t);  // integer part of sqrt(t)

    if (x * x == t) {
        printf("%lld", x);   // pivot integer
    } else {
        printf("-1");
    }

    return 0;
}
