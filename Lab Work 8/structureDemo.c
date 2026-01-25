#include<stdio.h>
struct structureDemo
{
    int id;
    char name[20];
    int mark;
};

int main(){
    struct structureDemo student1 = {1, "John", 90};
    struct structureDemo student2 = {2, "Jane", 80};

    printf("\nStudent 1:\n");
    printf("std_id: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Mark: %d\n", student1.mark);

    printf("\nStudent 2:\n");
    printf("std_id: %d\n", student2.id);
    printf("Name: %s\n", student2.name);
    printf("Mark: %d\n", student2.mark);

    return 0;
}