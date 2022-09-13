//swap two numbers using third variable or temporary variable
#include <stdio.h>
int main ()
{
    int a, b, third;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    third = a;
    a = b;
    b = third;
    //printf("After swapping: %d %d", a, b);
    printf("After swapping : %d\n", a);
    printf("After swapping: %d", b);
    return 0;
}