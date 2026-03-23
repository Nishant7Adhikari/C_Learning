// 2.	write a program to read from file "hello.txt" and display its contents.
#include <stdio.h>
int main() {
    FILE *file = fopen("hello.txt", "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit with an error code
    }
    
    char buffer[100]; // Buffer to hold the contents of the file
    while (fgets(buffer, sizeof(buffer), file) != NULL) { // Read the file line by line
        printf("%s", buffer); // Print the contents to the console
    }
    
    fclose(file); // Close the file
    return 0;
}