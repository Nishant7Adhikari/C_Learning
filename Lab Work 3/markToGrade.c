#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark: ");
    scanf("%d",&mark);
    if (mark>=90)
        printf("Grade: A+");
    else if (mark>=80)
        printf("Grade: A");
    else if (mark>=70)
        printf("Grade: B+");
    else if (mark>=60)
        printf("Grade: B");
    else if (mark>=50)
        printf("Grade: C+");
    else if (mark>=40)
        printf("Grade: C");
    else if (mark>=35)
        printf("Grade: D");
    else
        printf("Grade: NG");

    return 0;
}