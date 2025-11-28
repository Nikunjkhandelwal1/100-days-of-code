#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[50];

    // ---- Writing to file ----
    fp = fopen("students.txt", "w");

    if(fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nRecords saved successfully.\n\n");

    // ---- Reading from file ----
    fp = fopen("students.txt", "r");

    if(fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Stored Student Records:\n");
    printf("------------------------\n");

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
