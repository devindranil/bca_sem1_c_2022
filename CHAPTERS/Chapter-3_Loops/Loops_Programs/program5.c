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
    int i,j,n,sum=0;//10
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
            printf("prime no are: %d\n",i);
            sum=sum+i;// 0+2=2 2+3=5 5+5=10
            sum+=i;//sum=sum+i
        }
    }
    printf("Sum of prime numbers between 1 to %d: %d",n,sum);

    
    return 0;
}
