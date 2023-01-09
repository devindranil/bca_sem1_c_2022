#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct customer
{
    char name[100];
    int accountnumber;
    char accountType[100];
    int balance;
    char address[100];
    int phonenumber;
    char dateofbirth[100];
};
void addCustomer(struct customer *c, int *n)
{
    printf("Enter the name of the customer:\n");
    fflush(stdin); //before gets use fflus to avoid the bufferring 
    //scanf("%s", c[*n].name);
    /*use gets*/
    gets(c[*n].name);
    fflush(stdin);//after gets also use fflush
    printf("Enter account number:\n");
    scanf("%d", &c[*n].accountnumber);
    printf("Enter account type:\n");
    scanf("%s", c[*n].accountType);
    printf("Enter the balance of the customer:\n");
    scanf("%d", &c[*n].balance);
    printf("Enter the address of the customer:\n");
    scanf("%s", c[*n].address);
    printf("Enter the phone number of the customer:\n");
    scanf("%d", &c[*n].phonenumber);
    printf("Enter the date of birth of the customer:\n");
    scanf("%s", c[*n].dateofbirth);
    //enter amount to be deposited
    printf("Enter the amount to be deposited:\n");
    scanf("%d", &c[*n].balance);
    *n = *n + 1;
}
void displayAllCustomer(struct customer *c, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Name of the Customer: %s\n", c[i].name);
        printf("Account Number : %d\n", c[i].accountnumber);
        printf("Account Type :%s\n", c[i].accountType);
        printf("Balance: %d\n", c[i].balance);
        printf("Address: %s\n", c[i].address);
        printf("Phone Number: %d\n", c[i].phonenumber);
        printf("Date Of Birth : %s\n", c[i].dateofbirth);
    }
}
void searchCustomer(struct customer *c, int n)
{
    int i, accountNumber,amt=0;
    printf("Enter the account number to search:\n");
    scanf("%d", &accountNumber);
    for (i = 0; i < n; i++)
    {
        if (c[i].accountnumber == accountNumber)
        {
            printf("Name of the Customer: %s\n", c[i].name);
            printf("Account Number : %d\n", c[i].accountnumber);
            printf("Account Type :%s\n", c[i].accountType);
            printf("Balance: %d\n", c[i].balance);
            //enter amount to be deposited
            printf("Enter the amount to be deposited:\n");
            scanf("%d", &c[i].balance);
            amt=amt+c[i].balance;
            printf("amount deposited is %d\n",amt);
            printf("Address: %s\n", c[i].address);
            printf("Phone Number: %d\n", c[i].phonenumber);
            printf("Date Of Birth : %s\n", c[i].dateofbirth);
            return;
        }

        else
        {
            printf("Account Number not found");
        }
    }
}
void updateCustomer(struct customer *c, int n)
{
    int i, accountNumber;
    printf("Enter the account number to search:\n");
    scanf("%d", &accountNumber);
    for (i = 0; i < n; i++)
    {
        if (c[i].accountnumber == accountNumber)
        {
            printf("Name of the Customer: %s\n", c[i].name);
            printf("Account Number : %d\n", c[i].accountnumber);
            printf("Account Type :%s\n", c[i].accountType);
            printf("Balance: %d\n", c[i].balance);
            printf("Address: %s\n", c[i].address);
            printf("Phone Number: %d\n", c[i].phonenumber);
            printf("Date Of Birth : %s\n", c[i].dateofbirth);
            return;
        }

        else
        {
            printf("Account Number not found");
        }
    }
}
void deleteCustomer(struct customer *c, int *n)
{
    int i, accountNumber;
    printf("Enter the account number to be search:\n");
    scanf("%d", &accountNumber);
    for (i = 0; i < *n; i++)
    {
        if (c[i].accountnumber == accountNumber)
        {
            c[i] = c[*n - 1];
            *n = *n - 1;
            return;
        }
        else
        {
            printf("Account Number not found");
        }
    }
}
int main()
{
    struct customer c[100];
    int n = 0, choice;
    while (1)
    {
        printf("1.Add Customer\n");
        printf("2.Display All Customer\n");
        printf("3.Search Customer\n");
        printf("4.Update Customer\n");
        printf("5.Delete Customer\n");
        printf("6.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addCustomer(c, &n);
            break;
        case 2:
            displayAllCustomer(c, n);
            break;
        case 3:
            searchCustomer(c, n);
            break;
        case 4:
            updateCustomer(c, n);
            break;
        case 5:
            deleteCustomer(c, &n);
            break;
        case 6:
            exit(0);
            break;

        default:
            printf("Invalid Choice");
        }
    }
    return 0;
}