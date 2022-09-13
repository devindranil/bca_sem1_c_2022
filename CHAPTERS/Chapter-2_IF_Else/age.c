#include<stdio.h>
int main()
{
    
    int age;
    printf("Enter Your Age:\n");
    scanf("%d",&age);

    if(age>=18 && age<=95)
    {
        printf("You are eligible to vote\n");
    }
    else if(age==0 && age==18)
    {
        printf("You are not eligible to vote\n");
    }
    else if(age>95)
    {
        printf("You are not eligible to vote\n");
    }
    else if(age<0)
    {
        printf("Invalid Input\n");
    }
    return 0;
}