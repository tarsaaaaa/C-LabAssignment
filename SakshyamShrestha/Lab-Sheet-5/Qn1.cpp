/*
    Display data in proper manner using structure.
*/

#include <stdio.h>

struct student {
    char name[20];
    int marks;
    char grade;
};

int main() {
    struct student s[4];

    s[0] = (struct student){"Ram", 100, 'C'};
    s[1] = (struct student){"Sita", 120, 'B'};
    s[2] = (struct student){"Gita", 130, 'B'};
    s[3] = (struct student){"Gopal", 150, 'A'};

    printf("Name\tMarks\tGrade\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\t%d\t%c\n", s[i].name, s[i].marks, s[i].grade);
    }

    return 0;
}