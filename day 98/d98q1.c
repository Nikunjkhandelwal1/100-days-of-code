#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int areEqual(struct Student s1, struct Student s2) {

    // Compare all members
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll_no == s2.roll_no &&
       s1.marks == s2.marks) {
        return 1;  // identical
    }

    return 0; // not identical
}

int main() {
    struct Student s1, s2;

    // Input for first struct
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second struct
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Check if identical
    if(areEqual(s1, s2))
        printf("\nBoth student records are IDENTICAL.\n");
    else
        printf("\nStudent records are NOT identical.\n");

    return 0;
}
