#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return top student
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex]; // return structure
}

int main() {
    struct Student students[5];
    struct Student topper;

    // Input student records
    for(int i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Function call
    topper = getTopStudent(students, 5);

    // Print result
    printf("\n\n--- Top Student ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
