/**
 * @file test_library.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "library_header.h"
#define PROJECT_NAME  "LIBRARY_MANAGEMENT"

/* Prototypes for all the test functions */
void test_welcome_message(void);
void test_viewBook(void);
void test_file_exist(void);
void test_login(void);
void test_add_book(void);
void test_delete_book(void);
void test_search_book(void);
void test_menu(void);
void test_validDate(void);
void test_leap_year(void);
void test_name_valid(void);


/* Required by the unity test framework */
void setUp(){}

/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_welcome_message);
  RUN_TEST(test_login);
  RUN_TEST(test_menu);
  //RUN_TEST(test_add_book);
  RUN_TEST(test_viewBook);
  RUN_TEST(test_delete_book);
  RUN_TEST(test_search_book);
  RUN_TEST(test_validDate);
  RUN_TEST(test_leap_year);
  RUN_TEST(test_file_exist);
  RUN_TEST(test_name_valid);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
void test_file_exist(void)
{
  TEST_ASSERT_EQUAL(SUCCESS,isFileExists("LibraryBooksDetails.bin"));  
  //TEST_ASSERT_EQUAL(FILE_NOT_FOUND,isFileExists("Details.bin"));  
}
void test_welcome_message(void)
{
  TEST_ASSERT_EQUAL(SUCCESS,welcomeMessage());
}
void test_login()
{
  TEST_ASSERT_EQUAL(FAILURE,login("LibraryBooksDetails.bin","diptiman","diptiman"));
}
void test_viewBook(void)
{
  TEST_ASSERT_EQUAL(SUCCESS,viewBooks("LibraryBooksDetails.bin"));
}
void test_add_book(void)
{
  TEST_ASSERT_EQUAL(SUCCESS,addBookInDataBase("LibraryBooksDetails.bin"));
}
void test_delete_book(void)
{
  TEST_ASSERT_EQUAL(SUCCESS,deleteBooks("LibraryBooksDetails.bin"));
}
void test_search_book(void)
{
  TEST_ASSERT_EQUAL(NOT_FOUND,searchBooks("LibraryBooksDetails.bin"));
  //TEST_ASSERT_EQUAL(NOT_FOUND,searchBooks("LibraryBooksDetails.bin"));
}
void test_menu(void)
{
  TEST_ASSERT_EQUAL(SUCCESS,menu("LibraryBooksDetails.bin"));
}
void test_validDate(void)
{
  
  Date d1={.dd=31,.mm=2,.yyyy=2021};
  TEST_ASSERT_EQUAL(FAILURE,isValidDate(&d1));
  Date d2={.dd=31,.mm=4,.yyyy=2021};
  TEST_ASSERT_EQUAL(FAILURE,isValidDate(&d2));
  Date d3={.dd=31,.mm=3,.yyyy=2021};
  TEST_ASSERT_EQUAL(SUCCESS,isValidDate(&d3));
  Date d4={.dd=30,.mm=11,.yyyy=2021};
  TEST_ASSERT_EQUAL(SUCCESS,isValidDate(&d4));
  Date d5={.dd=32,.mm=13,.yyyy=10000};
  TEST_ASSERT_EQUAL(FAILURE,isValidDate(&d1));
}

void test_leap_year(void)
{
  TEST_ASSERT_EQUAL(0,leap_year(2021));  
  TEST_ASSERT_EQUAL(1,leap_year(2020));
}

void test_name_valid(void)
{
  TEST_ASSERT_EQUAL(SUCCESS,isNameValid("Diptiman"));
  TEST_ASSERT_EQUAL(FAILURE,isNameValid("Diptima@ "));
}