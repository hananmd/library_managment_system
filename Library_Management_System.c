#include<stdio.h>
#include<string.h>

struct Book{
    char books[100];
    char author[100];
    int ID;
    char Genre[100];
    char name[100];
    int Avail_no;
};

void Displaybooks(struct Book lms[],int count)
{
    printf("\n Library Books Inventory:\n");
    printf("ID  | Title                                    |Author                 | Genre               |Available Copies\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");


    for(int i=0;i<count;i++)
   {
    printf("%-3d | %-40s | %-21s | %-20s | %-16d\n", lms[i].ID, lms[i].books, lms[i].author, lms[i].Genre, lms[i].Avail_no);
   }
    


}
void loadBooks(struct Book lms[], int *Def_count) {
    FILE *file = fopen("books.dat", "w");  
    if (file != NULL) {
        while (fread(&lms[*Def_count], sizeof(struct Book), 1, file)) {
            (*Def_count)++;
        }
        fclose(file);
    }
}

int main()
{
    int choice;
    int Def_count=10;
    struct Book lms[100];
    strcpy(lms[0].books, "To Kill a Mockingbird");
    strcpy(lms[0].author, "Harper Lee");
    lms[0].Avail_no = 10;
    strcpy(lms[0].Genre, "Fiction");
    lms[0].ID = 001;

    strcpy(lms[1].books, "Thinking, Fast and Slow");
    strcpy(lms[1].author, "Daniel Kahneman");
    lms[1].Avail_no = 5;
    strcpy(lms[1].Genre, "Psychology");
    lms[1].ID = 002;

    strcpy(lms[2].books, "1984");
    strcpy(lms[2].author, "George Orwell");
    lms[2].Avail_no = 7;
    strcpy(lms[2].Genre, "Dystopian");
    lms[2].ID = 003;

    strcpy(lms[3].books, "The Great Gatsby");
    strcpy(lms[3].author, "F. Scott Fitzgerald");
    lms[3].Avail_no = 4;
    strcpy(lms[3].Genre, "Classic");
    lms[3].ID = 004;

    strcpy(lms[4].books, "Harry Potter and the Sorcerer's Stone");
    strcpy(lms[4].author, "J.K. Rowling");
    lms[4].Avail_no = 12;
    strcpy(lms[4].Genre, "Fantasy");
    lms[4].ID = 005;

    strcpy(lms[5].books, "Clean Code");
    strcpy(lms[5].author, "Robert C. Martin");
    lms[5].Avail_no = 8;
    strcpy(lms[5].Genre, "Programming");
    lms[5].ID = 006;

    strcpy(lms[6].books, "Sapiens: A Brief History of Humankind");
    strcpy(lms[6].author, "Yuval Noah Harari");
    lms[6].Avail_no = 6;
    strcpy(lms[6].Genre, "Non-fiction");
    lms[6].ID = 007;

    strcpy(lms[7].books, "The Hobbit");
    strcpy(lms[7].author, "J.R.R. Tolkien");
    lms[7].Avail_no = 9;
    strcpy(lms[7].Genre, "Fantasy");
    lms[7].ID = 8;

    strcpy(lms[8].books, "The Silent Patient");
    strcpy(lms[8].author, "Alex Michaelides");
    lms[8].Avail_no = 3;
    strcpy(lms[8].Genre, "Thriller");
    lms[8].ID = 9;

    strcpy(lms[9].books, "The Lean Startup");
    strcpy(lms[9].author, "Eric Ries");
    lms[9].Avail_no = 5;
    strcpy(lms[9].Genre, "Business");
    lms[9].ID = 10;
    

    while(1)
    {
        // Display menu each time
        printf("\n=== Welcome to the Library Management System ===\n");
        printf("========================================================\n");
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
            printf("=========================================================\n");
            lms[Def_count].ID=Def_count+1;
            printf("Book ID :%d\n",lms[Def_count].ID);
            
            
            printf("Enter the Book Name :");
            fgets(lms[Def_count].books,sizeof(lms[Def_count]),stdin);
            lms[Def_count].books[strcspn(lms[Def_count].books, "\n")] = '\0';
            
             printf("Enter the Author Name: ");
             fgets(lms[Def_count].author, sizeof(lms[Def_count].author), stdin);
             lms[Def_count].author[strcspn(lms[Def_count].author, "\n")] = '\0';
            
            printf("Enter the Genre: ");
            fgets(lms[Def_count].Genre, sizeof(lms[Def_count].Genre), stdin);
            lms[Def_count].Genre[strcspn(lms[Def_count].Genre, "\n")] = '\0';
             
               
            
             printf("Enter the Available Copies: ");
             scanf("%d", &lms[Def_count].Avail_no); 

             

             Def_count++;

             break;

             case 2:
             Displaybooks(lms,Def_count);

            
             
             

             
        }
    }

}

