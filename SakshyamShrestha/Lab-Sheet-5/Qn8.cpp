/*
    Create a union named student that has roll and marks as member.
    Assign some value to those member one at a time and display the result one at a time.
*/

#include <stdio.h>

union Student {
    int roll;
    float marks;
};

int main()
{
    union Student student;

    student.roll = 12345;
    printf("Roll: %d\n", student.roll);

    student.marks = 95.5;
    printf("Marks: %.2f\n", student.marks);

    return 0;
}