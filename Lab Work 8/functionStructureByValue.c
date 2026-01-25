#include<stdio.h>

struct student
{
    int roll;
};

void displayRoll(struct student v){
    printf("Roll No.: %d", v.roll);
}

int main(){
    struct student a;

    printf("Enter a roll No.: ");
    scanf("%d",&a.roll);
    displayRoll(a);

    return 0;
}