#include<stdio.h>

// function that takes input by value
void passByValue(int x){
    x = x + 10;
}

// function that takes input as a refrence pointer
void passByRefrence(int* y){
    *y = *y + 5;
}

int main(){
    int num = 5;
    passByValue(num);
    printf("output: %d -->By Value\n",num);

    passByRefrence(&num); // passing address of num
    printf("output: %d -->By Reference\n",num);

    return 0;
}