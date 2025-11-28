#include <stdio.h>

int main() {
    char date[15];
    int day, month, year;
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    // Extract numeric values
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Print in new format
    printf("Converted format: %02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
