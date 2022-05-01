
/*************************************************************************************************************************************************************/
/* File Name : APPLICATION.h                                                                                                                                       */
/* File Info. : This File contains which match our app.                                                                                              */
/* Version :V1.0                                                                                                                                            */
/* Data : 2 december 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/

#ifndef DATASTRUCTURE01_APPLICATION_H

#define DATASTRUCTURE01_APPLICATION_H


typedef struct {
    int model;
    char name[20];
    int id;
}element_type;
//element type will rename it about our application..

//for app.
#define MAXELEMENT 100

//for stack
typedef element_type Stack_Entry;
#define MAX_STACK  MAXELEMENT

//for  queue
typedef element_type entry_type;
#define MAX_QUEUE  MAXELEMENT




#endif //DATASTRUCTURE01_APPLICATION_H
