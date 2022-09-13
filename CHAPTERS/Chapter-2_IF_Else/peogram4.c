//Program To Check whether a number is positive, negative or zero using if-else
#include <stdio.h>

int main()
{
    int n;
    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);
    /* If number is positive */
    if(n > 0)
    {
        printf("Number is POSITIVE");
    }
    /* If number is negative */
    else if(n < 0)
    {
        printf("Number is NEGATIVE");
    }
    /* If number is zero */
    else
    {
        printf("Number is ZERO");
    }

    return 0;
}