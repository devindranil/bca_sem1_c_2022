//Program to check palindrome string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, len;
    int flag = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1; //not a palindrome
            break; //exit from loop
        }
    }
    if (flag) // if flag 1 not a palindrome
    {
        printf("%s is not a palindrome", str);
    }    
    else 
    {
        printf("%s is a palindrome", str);
    }
    return 0;
}