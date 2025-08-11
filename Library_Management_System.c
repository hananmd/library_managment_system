#include<stdio.h>
#include<string.h>

struct Book{
    char title[100];
    char author[100];
    int bookID;
    int isIssued; //0=not issued,1= issued
};

int bookCount = 3; // Keep track of number of books

int main()
{
    int choice;
    struct Book BK[100];
    
    // Initialize sample books using strcpy
    strcpy(BK[0].title, "C programming");
    strcpy(BK[0].author, "Brian Kernighan");
    BK[0].bookID = 101;
    BK[0].isIssued = 0;
    
    strcpy(BK[1].title, "Clean Code: A Handbook of Agile Software Craftsmanship");
    strcpy(BK[1].author, "Robert C. Martin");
    BK[1].bookID = 102; // Fixed duplicate ID
    BK[1].isIssued = 1;
    
    strcpy(BK[2].title, "The Pragmatic Programmer");
    strcpy(BK[2].author, "David Thomas");
    BK[2].bookID = 103; // Fixed duplicate ID
    BK[2].isIssued = 0;

    while(1)
    {
        // Display menu each time
        printf("\n=== Library Management System ===\n");
        printf("1. Add a new Book\n");
        printf("2. Display all books\n");
        printf("3. Search for a book by title\n");
        printf("4. Issue a book\n");
        printf("5. Return a book\n");
        printf("6. View issued books\n");
        printf("7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch(choice)
        {
            case 1:
             printf("enter ")
            case 4: // Issue a book
        }
    }

