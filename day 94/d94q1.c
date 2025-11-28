#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure and prints data
void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student st;

    // Taking input
    printf("Enter student name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll_no);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Calling function with structure as argument
    display(st);

    return 0;
}
