/*************************************************************************************************************************************************************/
/* File Name : Stack0.h                                                                                                                                      */
/* File Info. : This File contains about of data structure Stack prototypes                                                                                              */
/* Version :V1.0                                                                                                                                            */
/* Data : 2 december 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/

#ifndef DATASTRUCTURE01_STACK0_H
#define DATASTRUCTURE01_STACK0_H
#include "APPLICATION.h"

//#define MAX_STACK   4
//#define Stack_Entry char
//typedef char Stack_Entry;

typedef struct stack{
    int top;
    Stack_Entry entry[MAX_STACK];
}Stack;

//proto type of accessing mechanism..
void  CreatStack(Stack *ps);
void push( Stack_Entry item,Stack *ps);
int StackFull(Stack *ps);
void pop(Stack_Entry *pe,Stack *ps);
int  StackEmpty(Stack *ps);
void StackTop(Stack_Entry *pe,Stack *ps);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps, void  (*pDisplay)(Stack_Entry));




#endif //DATASTRUCTURE01_STACK0_H
