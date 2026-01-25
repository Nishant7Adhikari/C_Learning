#include<stdio.h>
// function to find largest among two numbers
int largest(int a, int b){
    if ( a > b)
    return a;
    else
    return b;
}

int main(){
    // decleration
    int num1, num2;

    // input
    printf("Enter number 1: ");
    scanf(" %d", &num1);
    printf("Enter number 2: ");
    scanf(" %d", &num2);

    // function call
    int lrg = largest(num1, num2);

    //output
    printf("Largest is %d\n",lrg);

    return 0;
}
