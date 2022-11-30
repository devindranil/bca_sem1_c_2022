//1^2+2^2+3^2+4^2..........n^2
#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //print the series 1^2+2^2+3^2+4^2..........n^2
        if(i==n)
        {
            printf("%d^2",i);
        }
        else
        {
            printf("%d^2 + ",i);
        }
        sum=sum+i*i;
    }
    printf("\nSum of %d natural number is %.2f",n,sum);
    return 0;
}