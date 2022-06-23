/**
 * @file login.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"
error_t login(const char *FILE_NAME,const unsigned char userName[MAX_SIZE_USER_NAME],const unsigned char password[MAX_SIZE_PASSWORD])
{
  
    sFileHeader fileHeaderInfo = {0};
    
    FILE *fp = NULL;


    
    
    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }
    fread (&fileHeaderInfo,FILE_HEADER_SIZE, 1, fp);
    fclose(fp);
    

    /// Checking whether user has inputted correct username and password 
    if((!strcmp(userName,fileHeaderInfo.username)) && (!strcmp(password,fileHeaderInfo.password)))
    {

        error_t status_menu=menu(FILE_NAME);
    }
    else
    {
        printf("\t\t\t\tLogin Failed Enter Again Username & Password\n\n");
        return FAILURE;
    }
    return SUCCESS;
}