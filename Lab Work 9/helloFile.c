#include <stdio.h>
int main() {
    FILE *file = fopen("hello.txt", "w"); // Open the file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit with an error code
    }
    
    fprintf(file, "Hello World\n"); // Write "Hello World" to the file
    
    fclose(file); // Close the file
    printf("Message written to hello.txt successfully.\n");
    
    return 0;
}
