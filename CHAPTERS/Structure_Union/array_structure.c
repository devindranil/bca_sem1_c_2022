/*
TODO: Write a program to store the information of 5 students in a structure. The information of each student includes roll number and name. The program should display the information of all the students.
*/

//*structure using array

/*#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
};

int main()
{
    struct student st[5];

    for(int i=0; i<2;i++)
    {
        printf("Enter the roll no:");
        scanf("%d",&st[i].roll);
        printf("Enter the name:");
        scanf("%s",st[i].name);
        fflush(stdin);
    }

    for(int i=0; i<2;i++)
    {
        printf("\nRoll No:%d,Name:%s", st[i].roll, st[i].name);
    }

    return 0;
}*/

//*structure without using array

/*
#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
};

int main()
{
    struct student st1 = {10, "Arnab"};
    printf("\nRoll No:%d,Name:%s", st1.roll, st1.name);

    struct student st2 = {20, "Srijan"};
    printf("\nRoll No:%d,Name:%s", st2.roll, st2.name);

    struct student st3 = {30, "Koushik"};
    printf("\nRoll No:%d,Name:%s", st3.roll, st3.name);

    struct student st4 = {40, "Deepak"};
    printf("\nRoll No:%d,Name:%s", st4.roll, st4.name);

    struct student st5 = {50, "Madhusree"};
    printf("\nRoll No:%d,Name:%s", st5.roll, st5.name);

    return 0;
}
*/

//*structure without taking user input using array


#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
};

int main()
{
    struct student st[5] = {
        {10, "Arnab"},
        {20, "Srijan"},
        {30, "Koushik"},
        {40, "Deepak"},
        {50, "Madhusree"}
        };

    printf("%d %s",st[4].roll,st[4].name);

    for(int i=0; i<5;i++)
    {
        printf("\nRoll No:%d,Name:%s", st[i].roll, st[i].name);
    }

    return 0;
}





