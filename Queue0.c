/*************************************************************************************************************************************************************/
/* File Name : Queue0.c                                                                                                                                        */
/* File Info. : This File contains implementations of data structure  Queue mechanism                                                                                          */
/* Version :V1.0                                                                                                                                            */
/* Data : 2 december 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/


#include "Queue0.h"

void CreatQueue(Queue_Type *pq){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
//push..
void Append(entry_type e,Queue_Type *pq){
    pq->rear=(pq->rear+1) % MAX_QUEUE;
    pq->entry[pq->rear]=e;
    pq->size++;
} //OR:

/*void Append(QueueEntry *e,Queue *pq){
    if(pq->rear == MAX)
        pq->rear=0;
    else
        pq->rear++;
}*/
//pop..
void Serve(entry_type *pe,Queue_Type *pq){
    *pe=pq->entry[pq->front];
    pq->front=(pq->front +1) % MAX_QUEUE;
    pq->size--;
}
int QueueEmpty(Queue_Type *pq){
    return !pq->size;
}

int QueueFull(Queue_Type *pq){
    return (pq->size==MAX_QUEUE);
}


int QueueSize(Queue_Type *pq){
    return pq->size;
}
void CleanQueue(Queue_Type *pq){
    //as same as creat stack..
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
void TraverseQueue(Queue_Type *pq,void (*pf)(entry_type)) {
    int position, s;
    for (position = pq->front, s = 0; s < pq->size; s++) {
        (*pf)(pq->entry[position]);
        position = (position + 1) % MAX_QUEUE;
    }
}

