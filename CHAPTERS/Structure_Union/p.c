/*
Create a structure in c for library management system.
Write a menu driven program to perform the following operations:

1. Add a book
2. Display all books
3. Search a book
4. Delete a book
5. Exit
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    int id;//book id
    char name[100];//book name
    char author[100];//book author
    int price;//book price
};

//function to add a book
void addBook(struct book *b, int *n) //b is a pointer to the array of books 
{
    printf("Enter book id: ");
    scanf("%d", &b[*n].id);           //n is the number of books
    printf("Enter book name: ");
    scanf("%s", b[*n].name);          //b[*n] is the book at index n
    printf("Enter book author: ");
    scanf("%s", b[*n].author);        //b[*n].id is the id of the book at index n
    printf("Enter book price: "); 
    scanf("%d", &b[*n].price);        //b[*n].name is the name of the book at index n
    *n = *n + 1;
}

void displayAllBooks(struct book *b, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        //display the books in tabular format
        printf("Book id: %d\n", b[i].id);
        printf("Book name: %s\n", b[i].name);
        printf("Book author: %s\n", b[i].author);
        printf("Book price: %d\n", b[i].price);
        
    }
}

void searchBook(struct book *b, int n)
{
    int i, id;
    printf("Enter book id to search: ");
    scanf("%d", &id);
    for (i = 0; i < n; i++)
    {
        if (b[i].id == id)
        {
            printf("Book id: %d", b[i].id);
            printf("Book name: %s", b[i].name);
            printf("Book author: %s", b[i].author);
            printf("Book price: %d", b[i].price);
            break;
        }
    }
    if (i == n)
    {
        printf("Book not found");
    }
}

void deleteBook(struct book *b, int *n)
{
    int i, id;
    printf("Enter book id to delete: ");
    scanf("%d", &id);
    for (i = 0; i < *n; i++)
    {
        if (b[i].id == id)
        {
            b[i] = b[*n - 1];
            *n = *n - 1;
            break;
        }
    }
    if (i == *n)
    {
        printf("Book not found");
    }
}

int main()
{
    struct book b[10];
    int n = 0;
    int choice;
    while (1)
    {
        printf("1. Add a book\n");
        printf("2. Display all books\n");
        printf("3. Search a book\n");
        printf("4. Delete a book\n");
        printf("5. Exit\n");
        printf("Enter your choice:\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addBook(b, &n);
            break;
        case 2:

            displayAllBooks(b, n);
            printf("\n");
            break;
        case 3:
            searchBook(b, n);
            break;
        case 4:
            deleteBook(b, &n);
            break;
        case 5:
            exit(0);
        default:

            printf("Invalid choice");
        }
    }
    return 0;
}
