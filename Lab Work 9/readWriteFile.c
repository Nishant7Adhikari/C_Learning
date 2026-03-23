#include <stdio.h>

int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dest = fopen("output.txt", "w");

    // Check if files opened correctly
    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    int ch; // Variable to hold each character

    // Read character by character until End Of File (EOF)
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);    // Write the character to the output file
        putchar(ch);        // Optional: print to console
    }

    fclose(src);
    fclose(dest);

    printf("\nFile copied successfully character by character.\n");
    return 0;
}
