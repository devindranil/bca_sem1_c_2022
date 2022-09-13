//write a c program to generate the electricity bill for a consumer
// if units consumed is less than 100 then the bill is 1.50 per unit
// if units consumed is between 100 and 200 then the bill is 2.50 per unit
// if units consumed is between 200 and 500 then the bill is 4.00 per unit
// if units consumed is more than 500 then the bill is 6.30 per unit

#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter the units consumed: ");
    scanf("%d", &units);
    if (units < 100)
    {
        bill = units * 1.50;
    }
    else if (units < 200)
    {
        bill = units * 2.50;
    }
    else if (units < 500)
    {
        bill = units * 4.00;
    }
    else
    {
        bill = units * 6.30;
    }
    printf("bill = %.2f", bill);
}

/**Output

    Enter the units consumed : 100 bill = 150.000000

    Enter the units consumed : 300 bill = 750.000000

    Enter the units consumed : 600 bill = 3780.000000

    Enter the units consumed : 50 bill = 75.000000*/