#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(fp);

    // Confirmation message
    printf("Data successfully saved to info.txt\n");

    return 0;
}
