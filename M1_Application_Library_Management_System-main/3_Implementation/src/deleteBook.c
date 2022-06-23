/**
 * @file deleteBook.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"

error_t deleteBooks(const char *FILE_NAME)
{

    error_t val;   error_t found_status = FAILURE;
    int bookDelete = 0;
    
    sFileHeader fileHeaderInfo = {0};
    s_BooksInfo Books = {0};
    
    FILE *fp = NULL; ///Permanent pointer
    FILE *tmpFp = NULL;///Temporary pointer
    
    ///Opening the file
    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }

    ///Creating a temporary file tmp.bin
    tmpFp = fopen("tmp.bin","wb");
    if(tmpFp == NULL)
    {
        fclose(fp);
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }

    fread (&fileHeaderInfo,FILE_HEADER_SIZE, 1, fp);
    fwrite(&fileHeaderInfo,FILE_HEADER_SIZE, 1, tmpFp);

    printf("\nEnter Book ID NO. for delete:");
    scanf("%d",&bookDelete);  ///Entering Book Id to be delted
    while (fread (&Books, sizeof(Books), 1, fp))
    {
        ///Checking for deletion status
        if(Books.books_id != bookDelete)
        {
            fwrite(&Books,sizeof(Books), 1, tmpFp);
            found_status=SUCCESS;
        }
        else
        {
            found_status = FAILURE;
        }
    }

    ///printing the status
    if(found_status)
    {
        printf("\nRecord deleted successfully.....");
        
    }
    else    
    {
        printf("\nRecord not found");
    }
    
    fclose(fp);
    fclose(tmpFp);
    
    ///Removing the old file and naming the tmp file as permanent file 
    remove(FILE_NAME);
    rename("tmp.bin",FILE_NAME);
    return SUCCESS;
}