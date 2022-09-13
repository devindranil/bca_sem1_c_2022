/**
 *  Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
    For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
    An additional subcharge of 20% is added to the bill.
 */
#include<stdio.h>
int main()
{
    int a;//a is a units 
    float b;//b is a bill amount
    float sc;//additional charge
    float total;//total bill amount
    float tax;//tax amount

    //user input
    printf("Enter the units:\n");
    scanf("%d",&a);

    //condition for calculating the bill amount
    if(a<=50){
        b = a*0.50;
    }
    else if(a<=150){
        b = 25 + (a-50)*0.75;
    }
    else if(a<=250){
        b = 100 + (a-150)*1.20;
    }
    else{
        b = 220 + (a-250)*1.50;
    }

    //additional charge
    sc = b*0.20; //20% of the bill amount

    //total bill amount
    total = b+sc;

    //output
    printf("The total electricity bill is %.2f\n",total);
    printf("sub charge is: %.1f\n",sc);

   
    //if total bill amount is less than 400 then tax is 0
    //if total bill amount is between 400 and 600 then tax is 15% of the total bill amount
    //if total bill amount is more than 600 then tax is 20% of the total bill amount

    /*if(total<=400){
        tax = 0;
    }
    else if(total<=600){
        tax = total*0.15;
    }
    else{
        tax = total*0.20;
    }*/

    //display tax amount
    //printf("tax amount is: %.2f\n",tax);

    return 0;
}