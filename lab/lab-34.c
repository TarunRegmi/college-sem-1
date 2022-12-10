/*
    Lab: 34
    Date: 2079-04-03
    Create structure named 'student' with member 'rollno', 'name' and 'marks'. Write a C program that reads records of three students and then display that information on monitor.
*/

#include <stdio.h>
struct Student{
    char name[25];
    int rollno;
    float marks;
};

int main() {
    struct Student s[3];
    int i;

    printf("\nEnter the detail of three students");
    for (i=0; i<3; i++) {
        printf("\nDetail of student-%d\nName: ", i+1);
        fgets(s[i].name, 25, stdin);
        fflush(stdin);
        printf("Roll No. : ");
        scanf("%d", &s[i].rollno);
        fflush(stdin);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        fflush(stdin);
    }

    printf("\n\nYou have entered following detail\n");
    for (i=0; i<3; i++) {
        printf("\nDetail of student-%d\nName: %s", i+1, s[i].name);
        printf("Roll No. : %d", s[i].rollno);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
    return 0;
}