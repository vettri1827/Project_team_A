/**
 * @file addBook.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"

error_t addBookInDataBase(const char* FILE_NAME)
{
    s_BooksInfo addBook = {0};
    FILE *fp = NULL;
    error_t status = FAILURE;
    fp = fopen(FILE_NAME,"ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }


    ///Details for books is Entered
    printf("\nENTER YOUR DETAILS BELOW:");
    printf("\n---------------------------------------------------------------------------\n");
    printf("\nBook ID NO  = ");
    fflush(stdin);
    scanf("%u",&addBook.books_id);
    do
    {
        printf("\nBook Name  = ");
        fflush(stdin);
        fgets(addBook.bookName,MAX_BOOK_NAME,stdin);
        status = isNameValid(addBook.bookName);
        if (!status)
        {
            printf("Book name violated the types. Please enter again.");
        }
    }
    while(!status);

    ///Author name is entered
    do
    {
        printf("\nAuthor Name  = ");
        fflush(stdin);
        fgets(addBook.authorName,MAX_AUTHOR_NAME,stdin);
        status = isNameValid(addBook.authorName);
        if (!status)
        {
            printf("\nName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    
    ///Student name who issued the book
    do
    {
        printf("\nStudent who Issued  = ");
        fflush(stdin);
        fgets(addBook.studentName,MAX_STUDENT_NAME,stdin);
        status = isNameValid(addBook.studentName);
        if (!status)
        {
            printf("\nName contain invalid character. Please enter again.");
        }
    }
    while(!status);

    ///Date of Issued
    do
    {
        //get date year,month and day from user
        printf("\nEnter date in format (day/month/year) when it was issue: ");
        scanf("%d/%d/%d",&addBook.bookIssueDate.dd,&addBook.bookIssueDate.mm,&addBook.bookIssueDate.yyyy);
        //check date validity
        status = isValidDate(&addBook.bookIssueDate);
        if (!status)
        {
            printf("\n\t\t\tPlease enter a valid date.\n");
        }
    }
    while(!status);

    ///Operation for adding 30 days to issued date
    Date d;
    d.dd=addBook.bookIssueDate.dd;
    d.mm=addBook.bookIssueDate.mm;
    d.yyyy=addBook.bookIssueDate.yyyy;
    addDate(&d);
    addBook.returnDate.dd=d.dd;
    addBook.returnDate.mm=d.mm;
    addBook.returnDate.yyyy=d.yyyy;

    ///Storing it to the file   
    fwrite(&addBook,sizeof(addBook), 1, fp);
    fclose(fp);
    return SUCCESS;
}