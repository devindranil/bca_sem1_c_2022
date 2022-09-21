//C program to check whether a number is palindrome or not
/**
 * Example
Input
Input any number: 121
 * Output
121 is palindrome
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
    
    //check if number is palindrome or not
    if(num == rev){
        printf("%d is palindrome", num);
    }
    else{
        printf("%d is not palindrome", num);
    }
    
    return 0;
}
