//Program to convert temperature from fahrenheit to celsius
#include <stdio.h>
int main()
{
    float c, f;
    /* Input temperature in fahrenheit */
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    /* Fahrenheit to celsius conversion formula */
    c = (f - 32) * 5 / 9;
    /* Print the value of celsius */
    printf("%.2f Fahrenheit = %.2f Celsius", f, c);
    return 0;
}