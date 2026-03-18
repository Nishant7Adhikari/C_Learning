#include <stdio.h>

int main(void)
{
    FILE *fp[5];
    char filename[64];

    for (int i = 0; i < 4; i++) {
        /* build a filename like: file1.txt, file2.txt */
        snprintf(filename, sizeof filename, "file%d.txt", i + 1);
        fp[i] = fopen(filename, "w");
        if (!fp[i]) {
            perror("fopen");
            return 1;
        }
        fprintf(fp[i], "This is %s\n", filename);
        fclose(fp[i]);
    }

    return 0;
}