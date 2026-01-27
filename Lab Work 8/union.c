#include <stdio.h>

union student
{
    int id;
    int sId;
};

int main()
{
    union student s1;

    s1.id = 1;
    printf("student id: %d\n", s1.id);

    s1.sId = 5;
    printf("Student Name: %d\n", s1.sId);

    printf("Overwritten Id: %d\n", s1.id);

    return 0;
}
