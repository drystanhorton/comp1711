#include <stdio.h>

typedef struct {
    char name [20];
    char student_id [10]; // Assuming 10 digits.
    unsigned mark;
} student;

int main () {

    // Data generated using ChatGPT.
    int number_of_students = 10, i;
    student students[10];

    for (i = 0; i < number_of_students; i++) {
        sprintf(students[i].name, "Student %d", i);
        sprintf(students[i].student_id, "1748263%d", i);
        students[i].mark = 35 + (13 + (17 * i)) % 65;
    }

    for (i = 0; i < number_of_students; i++) {
        printf("-------------\n");
        printf("Student name: %s\n", students[i].name);
        printf("Student ID: %s\n", students[i].student_id);
        printf("Final mark: %u\n", students[i].mark);
    }
    printf("-------------\n");
    return 0;
}