// write a program to use all arithmetic operators using logical operators (&&, ||, !)

#include <stdio.h>
int main()
{
    int a = 5, b = 10, c = 20, d = 30;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    printf("a > b && b > c: %d\n", a > b && b > c);
    printf("a > b || b > c: %d\n", a > b || b > c);
    printf("!a > b: %d\n", !a > b);
    return 0;
}


