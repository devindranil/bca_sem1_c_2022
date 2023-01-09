/*#include <stdio.h>
void main ()
{
    int a = 10;
    int *p;
    int **pp;
    p = &a; // pointer p is pointing to the address of a
    pp = &p; // pointer pp is a double pointer pointing to the address of pointer p
    printf("address of a: %x\n",p); // Address of a will be printed
    printf("address of p: %x\n",pp); // Address of p will be printed
    printf("value stored at p: %d\n",*p); // value stoted at the address contained by p i.e. 10 will be printed
    printf("value stored at pp: %d\n",**pp); // value stored at the address contained by the pointer stoyred at pp
}  */
/*#include <stdio.h>
int main()
{
    int a[10], i, even = 0, odd = 0;
    printf("Enter 10 elements :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)

    {

        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even no. is : %d\n", even);
    printf("odd no. is : %d", odd);
}*/

/*
    write a c program uing pointer to print the name and price of the items and sold in a retail shop on a specific date
*/

/*#include <stdio.h>
#include <string.h>
int main()
{
    char *name[5] = {"soap", "shampoo", "toothpaste", "brush", "paste"};
    int price[5] = {10, 20, 30, 40, 50};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("name of the item is %s and price is %d\n", name[i], price[i]);
    }

    return 0;
}*/
// write a program to find digit insolation and count using function
#include <stdio.h>
// create a function to find the digit insolation
// what is digit insolation
// digit insolation is the number of digit in a number
/*int digit_in(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
//create a function to find the digit count
int digit_count(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("the digit insolation is %d\n", digit_in(n));
    printf("the digit count is %d\n", digit_count(n));
    return 0;
}*/

// write a program to find digit count by using function with pointer
/*int digit_count(int *n)
{
    int count = 0;
    while (*n != 0)
    {
        *n = *n / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("the digit count is %d\n", digit_count(&n));
    return 0;
}*/

/*

 pattrn printing
  * * * *
        *
      *
    * * * *

*/

// C implementation of the approach
// #include <stdio.h>
// Function to print the desired
// Alphabet Z Pattern
/*void alphabet_Z_Pattern(int N)
{
    int index, side_index, size;

    // Declaring the values of Right,
    // Left and Diagonal values
    int Top = 1, Bottom = 1, Diagonal = N - 1;

    // Loop for printing the first row
    for (index = 0; index < N; index++)
        printf("%d ", Top++);

    printf("\n");

    // Main Loop for the rows from (2 to n-1)
    for (index = 1; index < N - 1; index++) {

        // Spaces for the diagonals
        for (side_index = 0; side_index < 2 * (N - index - 1);
             side_index++)
            printf(" ");

        // Printing the diagonal values
        printf("%d", Diagonal--);

        printf("\n");
    }

    // Loop for printing the last row
    for (index = 0; index < N; index++)
        printf("%d ", Bottom++);
}

// Function to print the desired
// star Z Pattern
void star_Z_Pattern(int N)
{
    int index, side_index, size;

    // Declaring the values of Right,
    // Left and Diagonal values
    int Top = 1, Bottom = 1, Diagonal = N - 1;

    // Loop for printing the first row
    for (index = 0; index < N; index++)
        printf("* ");

    printf("\n");

    // Main Loop for the rows from (2 to n-1)
    for (index = 1; index < N - 1; index++) {

        // Spaces for the diagonals
        for (side_index = 0; side_index < 2 * (N - index - 1);
             side_index++)
            printf(" ");

        // Printing the diagonal values
        printf("*");

        printf("\n");
    }

    // Loop for printing the last row
    for (index = 0; index < N; index++)
        printf("* ");
}

// Driver Code
int main()
{
    // Size of the Pattern
    int N = 5;
    alphabet_Z_Pattern(N);
    printf("\n");
    printf("\n");
    star_Z_Pattern(N);

    return 0;
}*/

// wap in for loop to calculate the follwoing series 1+x+x2+x3+x4+.......+xn
/*#include <stdio.h>
int main()
{
    int i, n, x, sum = 0, term = 1;
    printf("enter the value of x and n\n");
    scanf("%d%d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        term = term * x;//term means x power i
        sum = sum + term;//sum means 1+x+x2+x3+x4+.......+xn
    }
    //print the series
    printf("the series is 1");
    for (i = 1; i <= n; i++)
    {
        printf("+%d^%d", x, i);
    }
    printf("\n");
    printf("the sum of the series is %d\n", sum);
    return 0;
}*/
/*#include <stdio.h>

int main()

{

    //wap to check whether a character that is taken form the keyboard is alphabet , numeric or special character
    char ch;
    printf("enter the character\n");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("the character is alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("the character is numeric\n");
    }
    else
    {
        printf("the character is special character\n");
    }
    return 0;

}*/

/*
Wap to read roll number and Mark's of 10 students in 3 subjects.The valid range for roll number is 1000 to 9999 if the roll number entered is not in this range the user should be asked to enter again.Calculate total marks of only those students who get more than or equal to 40 marks in each subject.Count the number of the students whose total is more than 200.print the roll number of the student who gets the highest total..
*/

/*#include <stdio.h>
int main()
{
    int roll, i, j, total = 0, count = 0, max = 0, roll_max;
    int marks;
    for (i = 1; i <= 10; i++)
    {
        printf("enter the roll number\n");
        scanf("%d", &roll);
        if (roll >= 1000 && roll <= 9999)
        {
            for (j = 1; j <= 3; j++)
            {
                printf("enter the marks of the subject %d\n", j);
                scanf("%d", &marks);
                if (marks >= 40)
                {
                    total = total + marks;
                }
            }
            if (total > 200)
            {
                count++;
            }
            if (total > max)
            {
                max = total;
                roll_max = roll;
            }
        }
        else
        {
            printf("enter the roll number again\n");
            scanf("%d", &roll);
        }
    }
    printf("the number of students whose total is more than 200 is %d\n", count);
    printf("the roll number of the student who gets the highest total is %d\n", roll_max);
    return 0;
}*/

//write a program to evaluate the follwoing series: 1-3+5-7+........upto n
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter the value of n\n");
    scanf("%d", &n);
    //print the series
    printf("the series is 1");
    for (i = 3; i <= n; i = i + 2)
    {
        if (i % 4 == 1)
        {
            printf("+%d", i);
        }
        else
        {
            printf("-%d", i);
        }
    }
    return 0;
}