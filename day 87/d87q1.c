#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;

    // You can change this value to test different outputs
    role = USER;

    switch(role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! Login to access more features.\n");
            break;

        default:
            printf("Unknown role.\n");
    }

    return 0;
}
