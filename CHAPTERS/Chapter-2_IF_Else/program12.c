/**
Program To Calculate Driver insurance
A company insures its drivers in the following cases:
- If the driver is married.
- If the driver is unmarried, male and above 30 years of age.
- If the driver is unmarried, female and above 25 years of age.

In all the other cases, the driver is not insured.
If the marital status, sex and age of the driver are the inputs,
write a program to determine whether the driver is insured or not.
 *
 */

#include <stdio.h>
int main()
{
    int age;
    char ms, sex;
    /*printf("Enter Your age\nEnter Your Maritial Status(Y/N) in Capital Letters Only\nEnter Your Sexual Status(M/F) in Capital Letters Only\n M = Male & F = Female\n");*/
    printf("*****************Calculate Driver insurance*****************\n");
    printf("Enter Your age:\n");
    printf("***************************************************************************\n");
    printf("Enter Your Maritial Status(Y/N) in Capital Letters Only:\n");
    printf("***************************************************************************\n");
    printf("Enter Your Sexual Status(M/F) in Capital Letters Only M = Male & F = Female:\n");
    scanf("%d %c %c", &age, &ms, &sex);

    // write your code here
    // married
    if (ms == 'Y')
    {
        //condition if age <18 then print your age is very less for driving insurance
        if(age<18)
        {
            printf("your age is very less for driving insurance\n");
        }
        else{
            printf("The driver is insured\n");
        }
        
    }
    else if(ms=='y' || ms=='n')
    {
        printf("Invalid Input Plaese Fill all the inputs in capslock.........\n");
    }
    // unmarried
    else
    {
        if (sex == 'M')
        {
            if (age > 30)
            {
                printf("The driver is Insured\n & driver is male\n");
            }
            else
            {
                printf("The driver is Not Insured\n & driver is male\n");
            }
        }
        else
        {
            if (age > 25)
            {
                printf("The driver is Insured\n & driver is Female\n");
            }
            else
            {
                printf("The driver is Not Insured\n & driver is Female\n");
            }
        }
    }
}

/**
 * @brief    if (ms == 'Y')
   {
       // condition if age <18 then print your age is very less for driving insurance
       if (age < 18)
       {
           printf("your age is very less for driving insurance");
       }
       else
       {
           printf("The driver is insured");
       }
   }
   // condition for small and capital letters
   else if (ms == 'y')
   {
       printf("Invalid Input Plaese Fill all the inputs in capslock.........");
   }

   else
   {
       if (sex == 'M')
       {
           if (age > 30)
           {
               printf("Driver is insured\n & Male");
           }
           else
           {
               printf("Driver is not insured\n & Male");
           }
       }
       else
       {
           if (age > 25)
           {
               printf("Driver is insured\n & Female");
           }
           else
           {
               printf("Driver is not insured\n & Female");
           }
       }
   }
   return 0;
}
 *
 */
