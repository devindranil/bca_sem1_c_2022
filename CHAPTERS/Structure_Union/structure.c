/*
TODO: WAP TO DEFINE A STRUCTURE TO STORE FOLLOWING INFORMATION OF A STUDENT
*1. ROLL NO
*2. NAME
*/

#include<stdio.h>
#include<string.h>

//define the structure
/*
    struct = keyword
    student = structure Tag
*/
union student 
{
    int roll; //member
    char name[30]; //memeber
};

int main()
{
    //second method
    union student s3;
    s3.roll=10;
    strcpy(s3.name,"Dhoni");

    //print the value
    printf("Student Roll No = %d\n ",s3.roll);
    printf("Student Name = %s ",s3.name);
    return 0;
}
