#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// function declarations
int addition(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int sq(int a);
int sqrt1(int a);
int sin1(int a);
int cos1(int a);
int tan1(int a);
int power(int a, int b);
int degreetoradian(int a);
int radiantodegree(int a);
int gcd(int a, int b);
int exit1();

int main()
{
    // declaration a local variable op;
    int op;
    do
    {
        // displays the multiple operations of the C Calculator
        printf(" Select an operation to perform the calculation in C Calculator: ");
        printf(" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Sin(theta) \t \t 8 Cos(theta) \n 9 Tan(theta) \t \t 10 Power \n 11 Square Value \t 12 Degree to Radian \n 13 Radian to Degree \t 14 Exit \n \n Please, Make a choice ");

        scanf("%d", &op); // accepts a numeric input to choose the operation

        // use switch statement to call an operation
        switch (op)
        {
        case 1:
            addition(1, 2); /* It call the addition() function  to add the given numbers */
            break;          // break the function

        case 2:
            subtract(1, 2); /* It call the subtract() function  to subtract the given numbers */
            break;          // break the function

        case 3:
            multiply(1, 2); /* It call the multiply() function  to multiply the given numbers */
            break;          // break the function

        case 4:
            divide(1, 2); // It call the divide() function  to divide the given numbers
            break;        // break the function
        
        case 5:
            sq(1);  // It call the sq() function  to get the square of given numbers
            break; // break the function

        case 6:
            sqrt1(1); /* It call the sqrt1() function  to get the square root of given numbers */
            break;    // break the function
        
        case 7:
            sin1(1) /* It call the sin() function  to get the sin value of given numbers */;
            break; // break the function

        case 8:
            cos1(1) /* It call the cos() function  to get the cos value of given numbers */;
            break; // break the function

        case 9:
            tan1(1) /* It call the tan() function  to get the tan value of given numbers */;
            break; // break the function

        case 10:
            power(1, 2) /* It call the power() function  to get the power value of given numbers */;
            break; // break the function

        case 11:
            degreetoradian(1) /* It call the degreetoradian() function  to get the degreetoradian value of given numbers */;
            break; // break the function
        
        case 12:
            radiantodegree(1) /* It call the radiantodegree() function  to get the radiantodegree value of given numbers */;
            break; // break the function

        case 13:
            gcd(1, 2) /* It call the gcd() function  to get the gcd value of given numbers */;
            break; // break the function

        case 14:
            exit1(); /* It call the exit() function  to get the exit value of given numbers */
            break; // break the function

        default:
            printf(" Something is wrong!! ");
            break;
        }
    } while (op != 14); // condition to exit the program
        printf(" \n \n ********************************************** \n ");

    return 0;
}

// function definition
int addition(int a, int b)
{
    int sum;
    printf(" \n Enter the first number: ");
    scanf("%d", &a);
    printf(" \n Enter the second number: ");
    scanf("%d", &b);
    sum = a + b;
    printf(" \n The sum of %d and %d is %d ", a, b, sum);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use subtract() function to subtract two numbers
int subtract(int a, int b)
{
    int sub;
    printf(" \n Enter the first number: ");
    scanf("%d", &a);
    printf(" \n Enter the second number: ");
    scanf("%d", &b);
    sub = a - b;
    printf(" \n The subtraction of %d and %d is %d ", a, b, sub);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use multiply() function to multiply two numbers
int multiply(int a, int b)
{
    int mul;
    printf(" \n Enter the first number: ");
    scanf("%d", &a);
    printf(" \n Enter the second number: ");
    scanf("%d", &b);
    mul = a * b;
    printf(" \n The multiplication of %d and %d is %d ", a, b, mul);
    printf(" \n \n ********************************************** \n ");
    return 0;
}
// use divide() function to divide two numbers
int divide(int a, int b)
{
    int div;
    printf(" \n Enter the first number: ");
    scanf("%d", &a);
    printf(" \n Enter the second number: ");
    scanf("%d", &b);
    div = a / b;
    printf(" \n The division of %d and %d is %d ", a, b, div);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use sq() function to get the square of the given number
int sq(int a)
{
    int sq;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    sq = a * a;
    printf(" \n The square of %d is %d ", a, sq);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use sqrt1() function to get the square root of the given number
int sqrt1(int a)
{
    int sqrt1;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    sqrt1 = sqrt(a);
    printf(" \n The square root of %d is %d ", a, sqrt1);
    printf(" \n \n ********************************************** \n ");
    return 0;
}
// use sin() function to get the sin value of the given number
int sin1(int a)
{
    int sin1;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    sin1 = sin(a);
    printf(" \n The sin value of %d is %d ", a, sin1);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use cos() function to get the cos value of the given number
int cos1(int a)
{
    int cos1;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    cos1 = cos(a);
    printf(" \n The cos value of %d is %d ", a, cos1);
    printf(" \n \n ********************************************** \n ");
    return 0;
}
// use tan() function to get the tan value of the given number
int tan1(int a)
{
    int tan1;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    tan1 = tan(a);
    printf(" \n The tan value of %d is %d ", a, tan1);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use power() function to get the power of the given number
int power(int a, int b)
{
    int power;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    printf(" \n Enter the power: ");
    scanf("%d", &b);
    power = pow(a, b);
    printf(" \n The power of %d is %d ", a, power);
    printf(" \n \n ********************************************** \n ");
    return 0;
}
// use degreetoradian() function to get the degree to radian of the given number
int degreetoradian(int a)
{
    int degreetoradian;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    degreetoradian = a * 3.14 / 180;
    printf(" \n The degree to radian of %d is %d ", a, degreetoradian);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use radiantodegree() function to get the radian to degree of the given number
int radiantodegree(int a)
{
    int radiantodegree;
    printf(" \n Enter the number: ");
    scanf("%d", &a);
    radiantodegree = a * 180 / 3.14;
    printf(" \n The radian to degree of %d is %d ", a, radiantodegree);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use gcd() function to get the gcd of the given number
int gcd(int a, int b)
{
    int gcd;
    printf(" \n Enter the first number: ");
    scanf("%d", &a);
    printf(" \n Enter the second number: ");
    scanf("%d", &b);
    //gcd = __gcd(a, b);
    //alternative for __gcd() function
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    gcd = a;
    printf(" \n The gcd of %d and %d is %d ", a, b, gcd);
    printf(" \n \n ********************************************** \n ");
    return 0;
}

// use exit() function to exit from the program
int exit1()
{
    printf(" \n \n ********************************************** \n ");
    printf(" \n \n Thank you for using our program. \n ");
    printf(" \n \n ********************************************** \n ");
    return 0;
}