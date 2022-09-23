/**Write a Program to Find GCD or HCF of two numbers
entered by user*/
#include <stdio.h>
int main()
{
    // using while loop
    int n1, n2; // declare two variable

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != n2) // if n1 is not equal n2 then the loop will be execute
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n1 = n2 - n1;
        }
    }
    printf("GCD = %d", n1);

    return 0;
}