//C program to find reverse of a number
/**
 * Example
Input
Input number: 12345
Output
Reverse of 12345 = 54321
 * 
 */

#include <stdio.h>
int main()
{
    int num,rem;//num & rem are variables to store number and remainder
    int rev=0;//rev is variable to store reverse of number
    printf("Enter a number: ");
    scanf("%d", &num);
    //loop to find reverse of number
    while(num != 0)
    {
        rem = num%10;//find remainder
        rev = ((rev*10) + rem);//find reverse
        num /= 10;//reduce number by 1 digit
    }
    printf("Reversed Number = %d", rev);//print reverse
    return 0;
}