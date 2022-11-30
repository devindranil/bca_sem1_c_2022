/*sum of n natural number*/
// 1+2+3+4+....+n
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        //print the series 1+2+3+4+....+n
        if(i==n)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d+",i);
        }
        sum = sum + i;
    }
    printf("\nSum of %d natural number is %d", n, sum);
    return 0;
}
