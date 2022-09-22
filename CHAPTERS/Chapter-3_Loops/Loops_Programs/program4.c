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
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
