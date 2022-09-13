//c program to find second largest number among three numbers
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3)
    {
        if(num2 >= num3)
        {
            printf("%d is the second largest number.", num2);
        }
        else
        {
            printf("%d is the second largest number.", num3);
        }
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        if(num1 >= num3)
        {
            printf("%d is the second largest number.", num1);
        }
        else
        {
            printf("%d is the second largest number.", num3);
        }
    }
    else if(num3 >= num1 && num3 >= num2)
    {
        if(num1 >= num2)
        {
            printf("%d is the second largest number.", num1);
        }
        else
        {
            printf("%d is the second largest number.", num2);
        }
    }

    return 0;
}