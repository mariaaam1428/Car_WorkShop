/*************************************************************************************************************************************************************/
/* File Name : Queue0.h                                                                                                                                        */
/* File Info. : This File contains about of data structure  Queue mechanism                                                                                      */
/* Version :V1.0                                                                                                                                            */
/* Data : 2 december 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/


#ifndef DATASTRUCTURE01_QUEUE0_H
#define DATASTRUCTURE01_QUEUE0_H
#include "APPLICATION.h"
//#define MAX 100
//#define entry_type int


typedef struct {
    int rear;
    int front;
    int size;
    entry_type entry[MAX_QUEUE];
}Queue_Type;

void CreatQueue(Queue_Type *pq);
void Append( entry_type e,Queue_Type *pq);
void Serve( entry_type *pe,Queue_Type *pq);
int QueueEmpty(Queue_Type *pq);
int QueueFull(Queue_Type *pq);
int QueueSize(Queue_Type *pq);
void CleanQueue(Queue_Type *pq);
void TraverseQueue(Queue_Type *pq,void (*pf)(entry_type));




#endif //DATASTRUCTURE01_QUEUE0_H
