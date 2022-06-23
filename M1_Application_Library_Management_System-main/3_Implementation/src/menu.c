/**
 * @file menu.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"

error_t menu(const char *FILE_NAME)
{

    error_t status;
    int choice = 0;
    
    do
    {
        ///Displaying the main menu
        system(CLS);
        printf("MAIN MENU");
        printf("\n1.Add Books");
        printf("\n2.Search Books");
        printf("\n3.View Books");
        printf("\n4.Delete Book");
        printf("\n5.Update Password");
        printf("\n0.Exit");
        printf("\nEnter task: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                status= addBookInDataBase(FILE_NAME);
                break;
            case 2:
                status=searchBooks(FILE_NAME);
                break;
            case 3:
                status=viewBooks(FILE_NAME);
                break;
            case 4:
                status=deleteBooks(FILE_NAME);
                break;
            case 5:
                status=updateCredential(FILE_NAME);
                break;
            case 0:
                printf("\nThank you!!!");
                return SUCCESS;
                break;
            default:
                printf("\nINVALID INPUT!!! Try again...");
        }                                      
    }
    while(choice!=0);                                    

    return SUCCESS;
}