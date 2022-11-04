#include <stdio.h>
void display(int);
void main()
{
    int n = 3;
    display(n);
}
void display(int x)
{
    if (x < 1)
    {
        return;
    }
    else
    {
        printf("%d", x);
        display(x - 1);
        printf("%d", x);
    }
}