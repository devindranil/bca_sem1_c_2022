// given slab for electricity bill generation as follows
//  if amount <800 then no tax
//  if amount >800 and <1200 then tax = 10% on the tota amount
//  if amount >1200 and <2000 then tax = 15% on the total amount
//  if amount >2000 then tax = 20% on the total amount
// calculate net amount table including tax

#include <stdio.h>
int main()
{
    int amount;
    float tax, net_amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    if (amount < 800)
    {
        tax = 0;
        net_amount = amount;
    }
    else if (amount < 1200)
    {
        tax = amount * 0.1;
        net_amount = amount + tax;
    }
    else if (amount < 2000)
    {
        tax = amount * 0.15;
        net_amount = amount + tax;
    }
    else
    {
        tax = amount * 0.2;
        net_amount = amount + tax;
    }
    printf("tax = %.2f\n", tax);
    printf("net_amount = %.2f", net_amount);
}


/**Output

    Enter the amount : 1000 tax = 100.000000 net_amount = 1100.000000

    Enter the amount : 500 tax = 0.000000 net_amount = 500.000000

    Enter the amount : 3000 tax = 600.000000 net_amount = 3600.000000

    Enter the amount : 1500 tax = 225.000000 net_amount = 1725.000000*/



