#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char *name;
};

struct student getStudent()
{
    struct student s;

    printf("Enter the Roll No.: ");
    scanf(" %d", &s.roll);
    getchar();
    printf("Enter the Name  ");
    scanf(" %[^\n]s", s.name); // to take string input with whitespaces and terminate at newline

    return s;
}

int main()
{
    struct student s1;

    s1 = getStudent();

    printf("Roll No.: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);

    return 0;
}