// write a program to find the roots of a quadratic operation
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;          // a b and c is a coefficient value
    int root1, root2;     // this is for square root result
    int root_part, denom; // root_part is for root part and denom is for denominator
    // user input
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Enter the value of c:\n");
    scanf("%d", &c);

    root_part = sqrt((b * b) - (4 * a * c));
    denom = 2 * a;

    if (a == 0)
    {
        printf("This is not a quadratic equation\n");
    }
    else
    {
        if(root_part>0)
        {
            root1 = (-b + root_part) / denom;
            root2 = (-b - root_part) / denom;
            printf("The roots are real and different\n");
            printf("The roots are %d and %d\n", root1, root2);
        }
        else if(root_part==0)
        {
            root1 = (-b + root_part) / denom;
            root2 = (-b - root_part) / denom;
            printf("The roots are real and same\n");
            printf("The roots are %d and %d\n", root1, root1);
        }
        else
        {
            printf("The roots are imaginary\n");
        }
        
    }

    // output
    return 0;
}