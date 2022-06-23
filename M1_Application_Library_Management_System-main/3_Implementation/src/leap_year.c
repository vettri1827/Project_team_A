/**
 * @file leap_year.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"library_header.h"
// Function To Check for Leap year
int  leap_year(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0));
}
/// returns 1 if given date is valid.
