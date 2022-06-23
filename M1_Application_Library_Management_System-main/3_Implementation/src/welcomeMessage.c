/**
 * @file welcomeMessage.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"

error_t welcomeMessage()
{
    ///Welcome message is Displayed
    system(CLS);
    printf("\n  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n  =                 LIBRARY                   =");
    printf("\n  =               MANAGEMENT                  =");
    printf("\n  =                 SYSTEM                    =");
    printf("\n  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n Enter any key to continue.....");
    getchar();

    return SUCCESS;
}