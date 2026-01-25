#include<stdio.h>
struct structureArray
{
    int id;
    char name[20];
}s_id[10];

int main(){
    int i, size = 2;
    for(i = 0; i < size; i++){
        printf("Enter student id: ");
        scanf("%d", &s_id[i].id);
        printf("Enter student name: ");
        scanf("%s", &s_id[i].name);
    }

    for (i = 0; i < size; i++){
        printf("\nStudent %d:\n",i+1);
        printf("Id: %d\n", s_id[i].id);
        printf("Name: %s\n", s_id[i].name);
    }
    return 0;
}