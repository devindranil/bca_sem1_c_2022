//C program to convert temperature from degree celsius to fahrenheit
#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in degree celsius: ");
    scanf("%f",&c);

    // c*9/5+32
    f=(c*1.8)+32;
    printf("%.1f",f);

    return 0;
}