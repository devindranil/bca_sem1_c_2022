//1-1/3+1/9-1/27......n
#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //print the series 1-1/3+1/9-1/27......n
        if(i==n)
        {
            printf("1/%d",i*i*i);
        }
        else
        {
           //+ and - sign
            if(i%2==0)
            {
                printf("-1/%d + ",i*i*i);
            }
            else
            {
                printf("1/%d + ",i*i*i);
            }
        }
        sum=sum+1.0/(i*i*i);
        
    }
    printf("\nSum of %d natural number is %.2f",n,sum);
    return 0;
}