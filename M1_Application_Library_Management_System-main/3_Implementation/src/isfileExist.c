/**
 * @file isfileExist.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"
error_t isFileExists(const char *path)
{
    /// Trying to open the file
    FILE *fp = fopen(path, "rb");
    
    error_t status=FILE_NOT_FOUND;

    /// Checking for file exist or not
    if (fp != NULL)
    {
        status = SUCCESS;
        /// File exists hence close file
        fclose(fp);
    }
    return status;
}