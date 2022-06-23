/**
 * @file viewBook.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"

error_t viewBooks(const char* FILE_NAME)
{
    
    ///Displaying all books
    error_t print_status=FAILURE;
    s_BooksInfo Books = {0};
    
    FILE *fp = NULL;
    unsigned int countBook = 1;

    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }
    if (fseek(fp,FILE_HEADER_SIZE,SEEK_SET) != 0)
    {
        fclose(fp);
        printf("Facing issue while reading file\n");
        return FILE_NOT_FOUND;
    }
    while (fread (&Books, sizeof(Books), 1, fp))
    {
        printf("\n----------------------------------------------------");
        printf("\nBook Count = %u",countBook);
        printf("\nBook id = %u",Books.books_id);
        printf("\nBook name = %s",Books.bookName);
        printf("\nBook authorName = %s",Books.authorName);
        printf("\nStudent Name = %s",Books.studentName);
        printf("\nBook issue date(day/month/year) =  (%d/%d/%d)",Books.bookIssueDate.dd,Books.bookIssueDate.mm, Books.bookIssueDate.yyyy);
        printf("\nBook return date(day/month/year) =  (%d/%d/%d)",Books.returnDate.dd,Books.returnDate.mm, Books.returnDate.yyyy);
        printf("\n----------------------------------------------------");
    
        print_status = SUCCESS;
        ++countBook;
    }
    fclose(fp);
    if(!print_status)
    {
        printf("\nNo Record\n");
    }
    printf("\nPress any key to go to main menu.....");
    fflush(stdin);
    getchar();
    return SUCCESS;
}