// Develop a C program to merge the contents of 2 text files into a third text file.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;
    fp1 = fopen("F1.txt", "r");
    fp2 = fopen("bio.txt", "r");
    fp3 = fopen("F3.txt", "w");
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        perror("Error in opening files");
        exit(1);
    }
    else
    {
        ch = fgetc(fp1);
        while (ch != EOF)
        {
            fputc(ch, fp3);
            ch = fgetc(fp1);
        }
        ch = fgetc(fp2);
        while (ch != EOF)
        {
            fputc(ch, fp3);
            ch = fgetc(fp2);
        }
        printf("Files merged successfully");
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    }

    return 0;
}