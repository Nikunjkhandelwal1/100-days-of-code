#include <stdio.h>

int main() {
    float cp, sp, percent;
    scanf("%f %f", &cp, &sp);

    if(sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", percent);
    }
    else if(sp < cp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", percent);
    }
    else
        printf("No Profit No Loss");

    return 0;
}
