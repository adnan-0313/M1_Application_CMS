/**
 * @file cms_entities.h
 * @author Adnan
 * @brief College managment definition
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */

#ifndef __CMS_ENTITIES_H__
#define __CMS_ENTITIES_H__


#include "math.h"


typedef struct Student
{
    char Student_Name[50];
    char Student_Id[15];
    char Student_Dept[10];
    char Student_Address[100];
    char Student_Contact_Number[15];
    float Student_CGPA;
} Student;

#endif //#ifndef CMS_ENTITIES
