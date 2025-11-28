#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee empWrite, empRead;

    // ---- Writing to Binary File ----
    fp = fopen("employee.dat", "wb");

    if(fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter employee name: ");
    scanf("%s", empWrite.name);

    printf("Enter employee ID: ");
    scanf("%d", &empWrite.id);

    printf("Enter salary: ");
    scanf("%f", &empWrite.salary);

    // Write structure to binary file
    fwrite(&empWrite, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData successfully written to employee.dat\n\n");


    // ---- Reading from Binary File ----
    fp = fopen("employee.dat", "rb");

    if(fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("--- Employee Data Read From File ---\n");
    printf("Name: %s\n", empRead.name);
    printf("ID: %d\n", empRead.id);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}
