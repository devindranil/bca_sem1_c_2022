// WAP TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND EVEN NO
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i, even = 0, odd = 0;
    printf("Enter 10 integer values\n");
    for (i = 0; i < 10; i++)
    {
        int input;
        input=scanf("%d",&a[i]);
        //condition to check a value is float or integer
        if(input!=1)
        {
            printf("Invalid input");
            return 0;
        }
        else{
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    //easy way easy logic
        /*scanf("%d", &a[i]);
        if (a[i] % 2 == 0) // a[i]%2==0 a[4]%2==0 if yes then no is even and if not then odd
        {
            even++;//even=2
        }
        else
        {
            odd++;//odd=3
        }*/
    }
    printf("Total even no=%d\n", even);
    printf("Total odd no=%d\n", odd);
}