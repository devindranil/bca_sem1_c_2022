/*Develop a C program to read characters from a text file.*/

#include <stdio.h>

int main() {
    // Open the file for reading
    FILE* file = fopen("file.txt", "r");

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read characters from the file one by one
    char c;
    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    // Close the file
    fclose(file);

    return 0;
}
