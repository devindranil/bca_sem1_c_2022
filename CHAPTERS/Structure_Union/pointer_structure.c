/*
TODO: CREATE A STRUCTURE AS A ARGUMENT OF A FUNCTION
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//!CRETE A STRUCTURE STUDENT
struct student
{
    char name[100];
    int roll;
    int marks;
};

//!CREATE A FUNCTION TO DISPLAY THE STUDENT DETAILS
/*  
    * here we are passing the structure pointer as a argument of the function
    * ptr is the structure pointer
    * n is the number of students
*/
void displayStudent(struct student *ptr, int n) 
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Student name: %s\n", ptr[i].name);
        printf("Student roll: %d\n", ptr[i].roll);
        printf("Student marks: %d\n", ptr[i].marks);
    }   
}

int main()
{
    struct student s[100];                       //?ARRAY OF STRUCTURE
    int n = 0;
    int i;
    //!TAKE THE STUDENT DETAILS
    for (i = 0; i < 2; i++)
    {
        printf("Enter student name: ");
        scanf("%s", s[n].name);
        fflush(stdin);                          //?CLEAR THE BUFFER
        printf("Enter student roll: ");
        scanf("%d", &s[n].roll);
        printf("Enter student marks: ");
        scanf("%d", &s[n].marks);
        n = n + 1;                              //?INCREMENT THE NUMBER OF STUDENTS
    }
    
    //!CALL THE FUNCTION TO DISPLAY THE STUDENT DETAILS
    /*
        * here we are passing the structure variable as a argument of the function
        * s is the structure variable
        * n is the number of students
    */
    displayStudent(s, n);
    return 0;
}
