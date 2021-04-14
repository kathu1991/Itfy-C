
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 128

struct Book
{
    int accNo;
    char author[100];
    char title[100];
    char isIsued[15];
};
struct Book book[1000];
int bookCnt = 0;

void displayBookInfo()
{
    // int bookCnt = sizeof(struct Book) / sizeof(*book);
    // printf("\nSize of book is %d ", bookCnt);
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("Accession Num\t\t Author \t\t Title \t\t Is issued");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    for (int i = 0; i < bookCnt; i++)
    {

        printf("%d\t\t\t %s \t\t\t %s \t\t\t %s",
               book[i].accNo, book[i].author, book[i].title, book[i].isIsued);
        printf("\n");
    }
    printf("\n----------------------------------------------------------------------------------------\n");
}

void addNewBook()
{
    int n;
    printf("How many books you want to add?: \n");
    scanf("%d", &n);

    int cnt = bookCnt + n;
    printf("Add Details %d  book: \n", n);
    for (int i = bookCnt; i < cnt; i++)
    {
        // struct Book newBook;
        printf("\n Enter book %d accession num:  ", (i + 1));
        scanf("%d", &book[i].accNo);
        printf("\n Enter book %d author name:   ", (i + 1));
        scanf("%s", &book[i].author);
        printf("\n Enter book %d title of the book: ", (i + 1));
        scanf("%s", &book[i].title);
        printf("\n Book %d Is issued?:   ", (i + 1));
        scanf("%s", &book[i].isIsued);
    }
    bookCnt = cnt;
}
int showMenu()
{
    int m;
    printf("\n Do you want to show Menu? Enter 1 or 0 \n");
    scanf("%d", &m);
    return m;
}
void displayBookFromAuthor()

{
    char auth[100];
    printf("\nEnter Author name  \n");
    scanf("%s", &auth);

    // int bookCnt = sizeof(struct Book) / sizeof(*book);
    int found = 0;
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("Accession Num\t\t Author \t\t Title \t\t Is issued");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    for (int i = 0; i < bookCnt; i++)
    {
        if (strcmp(book[i].author, auth) == 0)
        {
            found = 1;
            printf("%d\t\t\t %s \t\t\t %s \t\t\t %s",
                   book[i].accNo, book[i].author, book[i].title, book[i].isIsued);
            printf("\n");
        }
    }
    if (found == 0)
    {
        printf("\n-------------------------------------\n");
        printf("\n No Book found from author %s ", auth);
        printf("\n-------------------------------------\n");
    }
}
void displayBookFromTitle()
{
    char title[100];
    printf("\nEnter Title of the book  \n");
    scanf("%s", &title);
    // int bookCnt = sizeof(struct Book) / sizeof(*book);
    int found = 0;
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("Accession Num\t\t Author \t\t Title \t\t Is issued");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    for (int i = 0; i < bookCnt; i++)
    {
        if (strcmp(book[i].title, title) == 0)
        {
            found = 1;
            printf("%d\t\t\t %s \t\t\t %s \t\t\t %s",
                   book[i].accNo, book[i].author, book[i].title, book[i].isIsued);
            printf("\n");
        }
    }
    if (found == 0)
    {
        printf("\n-------------------------------------\n");
        printf("\n No Book found from title %s ", title);
        printf("\n-------------------------------------\n");
    }
}
void issueBook()
{
    struct Book b1[100];
    int cnt = 0;
    int accNum;

    printf("\nList of books available for issue \n");
      printf("\n----------------------------------------------------------------------------------------");
    printf("Accession Num\t\t Author");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n");
    for (int i = 0; i < bookCnt; i++)
    {
        if (strcmp(book[i].isIsued, "n") == 0)
        {
            b1[cnt] = book[i];

printf("%d\t\t\t %s \t",
                   book[i].accNo, book[i].author);
      
    printf("\n----------------------------------------------------------------------------------------");
                printf("\n");
            cnt++;
        }
    }
    if (cnt > 0)
    {

        printf("\n Enter accession number to issue a book \n");
        scanf("%d", &accNum);
        int found = 0;
        for (int i = 0; i < bookCnt; i++)
        {
            if (book[i].accNo == accNum)
            {
                found = 1;
                strcpy(book[i].isIsued, "y");
                printf("\n  Book issued for accession number %d ", accNum);
                printf("\n-------------------------------------\n");
                break;
            }
        }
        if (found == 0)
        {
            printf("\n-------------------------------------\n");
            printf("\n No Book found from entered accession number %d ", accNum);
            printf("\n-------------------------------------\n");
        }
    }
    else
    {
        printf("\n-------------------------------------\n");
        printf("\n No books available to issue\n");
        printf("\n-------------------------------------\n");
    }
}
void TotalIssuedBook()
{
    int totalIssuedCnt = 0, totalNotIssuedCnt = 0;
    for (int i = 0; i < bookCnt; i++)
    {
        struct Book b1 = book[i];
        if (strcmp(book[i].isIsued, "y") == 0)
        {
            totalIssuedCnt++;
        }
        else
        {
            totalNotIssuedCnt++;
        }
    }
    printf("\n-------------------------------------\n");
    printf("\n Total issued book is %d ", totalIssuedCnt);
    printf("\n Total Not issued book is %d ", totalNotIssuedCnt);
    printf("\n-------------------------------------\n");
}
void chooseOption()
{
    int option;
    printf("Select option from menu\n");
    printf("1. Add New Book\n");
    printf("2. Display Book Information\n");
    printf("3. Display all the books in the library of a particular author\n");
    printf("4. Display the number of books of a particular title\n");
    printf("5. Display the total number of books in the library\n");
    printf("6. Issue a book\n\n");

    printf("Enter your option \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        addNewBook();
        break;
    case 2:
        displayBookInfo();
        break;
    case 3:
        displayBookFromAuthor();
        break;
    case 4:
        displayBookFromTitle();
        break;
    case 5:
        displayBookInfo();
        break;
    case 6:
        issueBook();
        break;
    default:
        break;
    }
    int m = showMenu();
    switch (m)
    {
    case 1:
        chooseOption();
        break;
    case 0:
        exit(0);
        break;
    default:
        break;
    }
}

int main()
{
    chooseOption();

    return 0;
}
