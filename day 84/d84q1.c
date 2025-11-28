#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result;

    // You may change this value to test: SUCCESS, FAILURE, TIMEOUT
    result = TIMEOUT;

    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out. Check your connection.\n");
            break;

        default:
            printf("Unknown status.\n");
    }

    return 0;
}
