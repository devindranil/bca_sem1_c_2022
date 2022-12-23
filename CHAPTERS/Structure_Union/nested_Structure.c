/**
 * * Problem Statement:
 * TODO: Write a program to define a structure to store the details of an employee. The details include employee id,name and date of joining. The date of joining should be stored in another structure which includes day, month and year. Display the details of the employee.
 * 
 */

#include<stdio.h>
#include<string.h>
union Date
{
    int dd;
    int mm;
    int yy;
};
union employee
{
    int empID;//member
    char empNAME[20];//member
    union Date doj;//nested structure
};

int main()
{
    struct employee e1;
    e1.empID=101;
    strcpy(e1.empNAME,"Sonoo Jaiswal");
    e1.doj.dd=10;
    e1.doj.mm=11;
    e1.doj.yy=2014;

    struct employee e2;
    e2.empID=102;
    strcpy(e2.empNAME,"Monoo Jaiswal");
    e2.doj.dd=22;
    e2.doj.mm=2;
    e2.doj.yy=2022;

    printf("Employee Id = %d\n",e2.empID);
    printf("Employee Name = %s\n",e2.empNAME);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d ",e2.doj.dd,e2.doj.mm,e2.doj.yy);

    return 0;
}





