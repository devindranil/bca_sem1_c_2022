/*Develop a C program to write characters in a text file*/
#include <stdio.h>

int main() {
    // Open the file for writing
    FILE* file = fopen("file.txt", "w");

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write characters to the file one by one
    char c;
    for (c = 'A'; c <= 'Z'; c++) {
        fputc(c, file);
    }

    // Close the file
    fclose(file);

    return 0;
}
