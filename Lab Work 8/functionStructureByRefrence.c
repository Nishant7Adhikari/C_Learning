#include <stdio.h>

struct student
{
    int roll;
};

void displayRoll(struct student *s)
{
    printf("Roll No.: %d\n", (*s).roll);
}

int main()
{
    struct student a;

    printf("Enter the Roll No.: ");
    scanf("%d", &a.roll);

    displayRoll(&a);

    return 0;
}