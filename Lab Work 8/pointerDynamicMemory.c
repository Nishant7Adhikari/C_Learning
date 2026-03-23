#include <stdio.h>
#include <stdlib.h> 
int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Dynamically allocate memory for an array of integers
    int* arr = (int*)malloc(size * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }
    
    // Ask the user for values to fill the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display the values entered by the user
    printf("You entered:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free the allocated memory
    free(arr);
    
    return 0;
}