//C program to find sum of prime numbers between 1 to n
/**
 * Example
Input
Input upper limit: 10
Output
Sum of prime numbers between 1-10: 17
 * 
 */

#include <stdio.h>
int main()
{
    int n1, n2, i, j, sum = 0;
    printf("Enter range of numbers: ");
    scanf("%d %d", &n1, &n2);
    //loop to find prime numbers between n1 and n2
    for (i = n1; i <= n2; i++)
    {
        //loop to check if i is prime or not
        for (j = 2; j <= i; j++)
        {
            //check if j is factor of i
            if (i % j == 0)
            {
                //check if j is equal to i
                break;
                sum=sum+i;
            }
        }
        //check if j is equal to i
        if(i==j)
        {
            printf("The factors are: %d, \n", i);
        }
    }
    //print sum of prime numbers
    printf("Sum of prime numbers between %d+%d: %d", n1, n2, sum);
    return 0;
}
