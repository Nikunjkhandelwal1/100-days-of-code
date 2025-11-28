#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month m;

    for (m = JANUARY; m <= DECEMBER; m++) {
        switch(m) {
            case JANUARY:
                printf("JANUARY has 31 days\n");
                break;
            case FEBRUARY:
                printf("FEBRUARY has 28 or 29 days\n");
                break;
            case MARCH:
                printf("MARCH has 31 days\n");
                break;
            case APRIL:
                printf("APRIL has 30 days\n");
                break;
            case MAY:
                printf("MAY has 31 days\n");
                break;
            case JUNE:
                printf("JUNE has 30 days\n");
                break;
            case JULY:
                printf("JULY has 31 days\n");
                break;
            case AUGUST:
                printf("AUGUST has 31 days\n");
                break;
            case SEPTEMBER:
                printf("SEPTEMBER has 30 days\n");
                break;
            case OCTOBER:
                printf("OCTOBER has 31 days\n");
                break;
            case NOVEMBER:
                printf("NOVEMBER has 30 days\n");
                break;
            case DECEMBER:
                printf("DECEMBER has 31 days\n");
                break;
        }
    }

    return 0;
}
