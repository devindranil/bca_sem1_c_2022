//write any program to show the use of conditional operator/ternary operator
//program check the eleigibility of a person to vote

/*#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age >= 18) ? printf("You are eligible to vote") : printf("You are not eligible to vote");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age>=18)?printf("You are eligible to vote") : printf("You are not eligible to vote");

    return 0;
}*/

//write a program to check maximum of three numbers using conditional operator/ternary operator

/*#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    (a > b && a > c) ? printf("%d is maximum", a) : (b > c) ? printf("%d is maximum", b) : printf("%d is maximum", c);
    return 0;
}*/


#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    (a>b && a>c)?printf("%d is maximum",a):(b>c)?printf("%d is maximum",b):(c>a)?printf("%d is maximum",c):printf("All are equal");
    return 0;
}

/**
 * @brief syntax of conditional operator/ternary operator
 * 
 * expression1 ? expression2 : expression3
 * 
 * Meaning of the above syntax.
    In the above syntax, the expression1 is a Boolean condition that can be either true or false value.
    If the expression1 results into a true value, then the expression2 will execute.
    The expression2 is said to be true only when it returns a non-zero value.
    If the expression1 returns false value then the expression3 will execute.
T   he expression3 is said to be false only when it returns zero value.
 * 
 */