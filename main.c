#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // pointer for file we wish to open
    FILE *file_ptr;

    // Buffer Character
    char ch;

    // Load the file
    file_ptr = fopen("testFiles/test.md", "r");

    if (NULL == file_ptr) {
        printf("Cannot open file \n");
        return EXIT_FAILURE;
    }

    printf("File Contents: \n");

    while((ch = fgetc(file_ptr)) != EOF) {
        printf("%c", ch);
    }

    getchar();
    fclose(file_ptr);
    return 0;
}
