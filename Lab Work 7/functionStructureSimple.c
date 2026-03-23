#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
void displayStudent(struct Student student) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}
int main() {
    struct Student student1;
    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);
    
    displayStudent(student1);
    
    return 0;
}
