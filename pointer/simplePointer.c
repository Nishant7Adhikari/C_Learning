#include<stdio.h>
int main ()
{
    // init value
    int value = 10;
    printf("Value using normal variable: %d\n", value);
    printf("Address using Address of operator: %p\n",&value);

    // init pointer
    int* ptr = &value;

    printf("Value using pointer: %d\n", 8);
    printf("Address using pointer: %p\n",ptr);
    return 0;
}