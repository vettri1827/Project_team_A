/**
 * @file library_header.h
 * @author Mohanraj D 
 * @brief Library Management System
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


#define MAX_YR  9999  ///<Maximum year
#define MIN_YR  1900  ///<Minimum year
#define MAX_SIZE_USER_NAME 30 ///<Maximum Username Size
#define MAX_SIZE_PASSWORD  20 ///<Minimum Username Size


/// Defined For Books
#define MAX_BOOK_NAME   50  ///<Maximum Book Name Size
#define MAX_AUTHOR_NAME 50  ///<Minimum Book name Size
#define MAX_STUDENT_NAME 50 ///<Maximum Student name Size
#define MAX_STUDENT_ADDRESS 300 ///<Minimum Student name Size
#define FILE_HEADER_SIZE  sizeof(sFileHeader)  //<Size of file Header

#ifndef _LIBRARY_HEADER_
#define _LIBRARY_HEADER_

#ifdef _WIN32               ///Defining CLS for linux and Windows
    #define CLS "cls"
#elif __linux__
    #define CLS "clear"
#endif


/**
 * @brief For error Handling
 * 
 */

typedef enum error_t
{
    FILE_NOT_FOUND=-1,
	FAILURE=0,
    SUCCESS=1,
    NOT_FOUND=2
	
}error_t;

/**
 * @brief Structure for Date
 * 
 */
typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;

/**
 * @brief Username and Password for file
 */
typedef struct
{
    char username[MAX_SIZE_USER_NAME];
    char password[MAX_SIZE_PASSWORD];
} sFileHeader;


/**
 * @brief Structure for Book Informations
 */
typedef struct
{
    unsigned int books_id; 
    char bookName[MAX_BOOK_NAME];
    char authorName[MAX_AUTHOR_NAME];
    char studentName[MAX_STUDENT_NAME];
    Date returnDate;
    Date bookIssueDate;
} s_BooksInfo;


/**
 * @brief  function creates the file if not exist and copies the default password (“diptiman”) in file header structure.
 * 
 * @return error_t 
 */
error_t initialise();


/**
 * @brief This function verifies that a file has been created or not. If the file exists, the function return SUCCESS otherwise returns FILE_NOT_FOUND.
 * 
 * @param path 
 * @return error_t 
 */
error_t isFileExists(const char *path);


/**
 * @brief It prints the message on the top of the console and prints the welcome message.
 * 
 * @param message 
 * @return error_t 
 */

error_t welcomeMessage();


/**
 * @brief It validates the user name and check any invalid character is present or not
 * 
 * @param name 
 * @return error_t 
 */
error_t isNameValid(const char *name);


/**
 * @brief It take Date and check whether it is a valid date or not 
 * 
 * @param validDate 
 * @return error_t 
 */
error_t isValidDate(Date *validDate);


/**
 * @brief Displays the Main Menu for opearations
 * 
 * @param FILE_NAME 
 * @return error_t 
 */
error_t menu(const char *FILE_NAME);

/**
 * @brief Function add books id,name,author's name ,student who issued and when issued to the file
 * 
 * @param FILE_NAME 
 * @return error_t 
 */
error_t addBookInDataBase(const char *FILE_NAME);

/**
 * @brief Searches book by taking Book name 
 * 
 * @param FILE_NAME 
 * @return error_t 
 */
error_t searchBooks(const char *FILE_NAME);

/**
 * @brief Displays all Books Details
 * 
 * @param FILE_NAME 
 * @return error_t 
 */
error_t viewBooks(const char *FILE_NAME);

/**
 * @brief It Delete book by taking the book id
 * 
 * @param FILE_NAME 
 * @return error_t 
 */
error_t deleteBooks(const char *FILE_NAME);

/**
 * @brief Its update the username and password
 * 
 * @param FILE_NAME 
 * @return error_t 
 */
error_t updateCredential(const char *FILE_NAME);

/**
 * @brief It makes the user login to system by entering the username and password
 * 
 * @param FILE_NAME 
 * @param username 
 * @param password 
 * @return error_t 
 */
error_t login(const char *FILE_NAME,const unsigned char username[],const unsigned char password[]);

/**
 * @brief It add 30 days to the issued date and return the date
 * 
 * @param d 
 * @return Date 
 */
Date addDate(Date *d);

/**
 * @brief Chech for leap year 
 * 
 * @param year 
 * @return int 
 */
int leap_year(int year);
#endif