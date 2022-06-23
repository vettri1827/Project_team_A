/**
 * @file main.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"
int main()
{

    const char FILE_NAME[50]= "LibraryBooksDetails.bin"; ///<File name which acts as the database
    unsigned char userName[MAX_SIZE_USER_NAME] = {0};   ///<For entering the username
    unsigned char password[MAX_SIZE_PASSWORD] = {0};    ///<For entering the password
    
    int login_count=1; ///<Counting number of times user tried to login with wrong username or password
    
    error_t status=SUCCESS;

    status = initialise(FILE_NAME); ///<Initialising the file
    
    status=welcomeMessage(); ///<printing the welcome message

    do
    { 
        printf("\nUsername:");
        fgets(userName,MAX_SIZE_USER_NAME,stdin);  ///<Entering the username
        printf("\nPassword:");
        fgets(password,MAX_SIZE_PASSWORD,stdin);    ///<Entering the password
        status=login(FILE_NAME,userName,password);  ///Trying to login to system
        login_count+=1;                             ///Counting the login times
    }while(status==0 && login_count<=3);           ///number login status should be less than 3

    if(login_count>3)   ///Login Times for wrong username and password should be less than 3 other print message Login failed 
    {
        printf("\nLogin Failed\n");
        printf("\t\t\t\tSorry,Unknown User.");
        getchar();
        system(CLS);
    }

    return 0;
}