//write a program to find the roots of a quadratic operation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c; //a b and c is a coefficient value
    float root1,root2; //this is for square root result
    float root_part,denom; // root_part is for root part and denom is for denominator
    //user input
    /*printf("Enter the value of a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);*/
    //alternate way to take input
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    printf("Enter the value of c:\n");
    scanf("%f",&c);
    if(a==0)
    {
        printf("This is not a quadratic equation\n");
    }
    else
    {
        root_part=sqrt((b*b)-4*a*c);
        denom=2*a;
        root1=(-b+root_part/denom);
        root2=(-b-root_part/denom);
        printf("The roots of the quadratic equation are %.1f and %.1f",root1,root2);
    }

    //------formula for finding the roots of a quadratic equation-----
    /*root_part = sqrt(b*b-4*a*c); //root part
    denom = 2*a; //denominator
    root1 = (-b+root_part)/denom; //root1
    root2 = (-b-root_part)/denom; //root2*/

    //output
   return 0;
}