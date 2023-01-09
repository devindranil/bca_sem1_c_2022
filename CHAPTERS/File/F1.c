/*Develop a C program to copy the contents of one text file into another text file*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *source_file, *dest_file;
    char ch;
    source_file = fopen("bio.txt", "r");

    if (source_file == NULL)
    {
        perror("File Not Exist\n");
        return 1;
    }
    else
    {
        dest_file = fopen("F1.txt", "w");
        if (dest_file == NULL)
        {
            perror("File Not Exist\n");
            return 1;
        }
        else
        {
            ch = fgetc(source_file);
            while (ch != EOF)
            {
                fputc(ch, dest_file);
                ch = fgetc(source_file);
            }
        }
    }

    return 0;
}