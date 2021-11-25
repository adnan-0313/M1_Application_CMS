/**
 * @file cms_operations.h
 * @author Adnan
 * @brief Header file for function prototypes
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */
#ifndef __CMS_OPERATIONS_H__
#define __CMS_OPERATIONS_H__

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "cms_entities.h"



/**
 * @brief Show all the detail about Students
 * 
 * @param Search detail
 * @param Update Detail
 * @returnDelete detail
 */
void Create_Account();

/**
 * @briefCreate Account
 * 
 * @param Create account detail
 * @return Account Detail
 */

void Display_Information();

/**
 * @brief Show all information
 * 
 * @param information
 * @return Return information
 */

void Updation_Information();

/**
 * @briefGenerate update information
 * 
 * @param name of the student
 * @param Update student detail
 */
void Deletion_Information();

/**
 * @brief Generate Delete information
 * 
 * @param complete delete information
 */
void Searching_Information();

/**
 * @brief Search information
 * 
 * @param Recieve information
 */

#endif  /* #define __CMS_OPERATIONS_H__ */
