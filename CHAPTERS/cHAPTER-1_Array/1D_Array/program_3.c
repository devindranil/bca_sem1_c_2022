//wap to read two arrays and add them and store the result in third array
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter the elements of first array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)// 0
    {
        c[i]=a[i]+b[i];//sum of two arrays 10+20=30
        printf("sum of array elements at index %d is %d\n",i,c[i]);
    }
    return 0;
}