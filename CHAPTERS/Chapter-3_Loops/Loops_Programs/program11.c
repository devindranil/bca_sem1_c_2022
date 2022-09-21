//C program to find LCM of two numbers
/**
 *Example
Input
Input number1: 12
Input number2: 30
Output
LCM = 60
 * 
 */

#include <stdio.h>
int main()
{
    int n1, n2, max,lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    //max = (n1 > n2) ? n1 : n2;
    
    if(n1>n2){
        max = n1;
    }else{
        max=n2;
    }

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    printf("LCM = %d", lcm);
    return 0;
}
