//write a progarm to calculate different discounts given on different discounts given on different amount of purchases
//if the purchase is greater than or equal 10000 then discount is 10% of purchase
//if the purchase is greater than or equal 7000 then discount is 5% of purchase
//if the purchase is greater than or equal 3000 then discount is 2% of purchase
//if the purchase is less than 3000 then discount is 0% of purchase

#include <stdio.h>
int main()
{
    float purchase, discount;
    printf("Enter the purchase amount: ");
    scanf("%f", &purchase);
    if (purchase >= 10000)//10000 to n
    {
        discount = purchase * 0.1;
    }
    else if (purchase >= 7000)//7000 to 9999
    {
        discount = purchase * 0.05;
    }
    else if (purchase >= 3000)//3000 to 6999
    {
        discount = purchase * 0.02;
    }
    //lestt than 3000
    else
    {
        discount = 0;
    }
    printf("Discount is: %.1f", discount);
    return 0;
}