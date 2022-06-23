/**
 * @file initialised.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "library_header.h"

error_t initialise(const char *FILE_NAME)
{
    FILE *fp = NULL;
    error_t status;
    const char defaultUsername[] ="mohanraj\n";
    const char defaultPassword[] ="mohanraj\n";
    sFileHeader fileHeaderInfo = {0};
    status = isFileExists(FILE_NAME);
    if(status==-1)
    {
        /// Creating the binary file
        fp = fopen(FILE_NAME,"wb");
        if(fp != NULL)
        {
            /// Copy default password
            strncpy(fileHeaderInfo.username,defaultUsername,sizeof(defaultUsername));
            strncpy(fileHeaderInfo.password,defaultPassword,sizeof(defaultPassword));
            fwrite(&fileHeaderInfo,FILE_HEADER_SIZE, 1, fp);
            fclose(fp);
        }
    }
    return SUCCESS;
}