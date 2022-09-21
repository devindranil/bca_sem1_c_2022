// C program to print all prime numbers between 1 to n
/**
 * Example
Input
Input lower limit: 1
Input upper limit: 20
Output
Prime numbers between 1-20: 2, 3, 5, 7, 13, 17, 19
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
            }
        }
        //check if j is equal to i
        if(i==j)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
