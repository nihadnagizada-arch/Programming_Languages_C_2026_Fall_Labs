/*
 * week4_2_struct_student.c
 * Author: [Nihad Naghizade]
 * Student ID: [251ADB080]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[50]), id (int), grade (float)
struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    // TODO: Declare two Student variables

    // TODO: Assign the values (use strcpy for the name):
    struct Student student1;
    struct Student student2;
    strcpy(student1.name, "Yusif");
    student1.id = 222;
    student1.grade = 9.1;

    strcpy(student2.name, "Nihad");
    student2.id = 111;
    student2.grade = 8.7;

    // TODO: Print each student exactly as:
    printf("Student 1: %s, ID: %d, Grade: %.1f\n",
           student1.name, student1.id, student1.grade);
    printf("Student 2: %s, ID: %d, Grade: %.1f\n",
           student2.name, student2.id, student2.grade);       

    return 0;
}
