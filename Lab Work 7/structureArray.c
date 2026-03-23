#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
int main() {
    struct Student students[2];
    int i;
    for (i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    printf("\nStudent Details:\n");
    for (i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    
    return 0;
}
