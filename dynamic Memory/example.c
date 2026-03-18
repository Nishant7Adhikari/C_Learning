#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf(" %d",&size);

    int* arr = malloc(size * sizeof(int));

    for(int i = 0; i < size; i++)
    {
        scanf(" %d",&arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        printf("\nValue of [%d] is %d", i+1, arr[i]);
    }
}