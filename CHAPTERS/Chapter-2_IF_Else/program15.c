//write a program to calculate commison of a salesman.
//if the sales is greater than or equal 10000 then commision is 10% of sales
//if the sales is greater than or equal 7000 then commision is 5% of sales
//if the sales is greater than or equal 3000 then commision is 2% of sales
//if the sales is less than 3000 then commision is 0% of sales

#include <stdio.h>
int main()
{
    float sales, commision;
    printf("Enter the sales amount: ");
    scanf("%f", &sales);
    if (sales >= 10000)//10000 to n
    {
        commision = sales * 0.1;
    }
    else if (sales >= 7000)//7000 to 9999
    {
        commision = sales * 0.05;
    }
    else if (sales >= 3000)//3000 to 6999
    {
        commision = sales * 0.02;
    }
    //lestt than 3000
    else
    {
        commision = 0;
    }
    printf("Commision is: %.1f", commision);
    return 0;
}