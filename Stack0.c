/*************************************************************************************************************************************************************/
/* File Name :Stack0.c                                                                                                                                        */
/* File Info. : This File contains implementations of data structure Stack array based imp. mechanism                                                                                          */
/* Version :V1.0                                                                                                                                            */
/* Data : 2 december 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/

#include "Stack0.h"
//////////////////////////////////////////////ACCESSING MECHANISM1////////////////////////////////////////////////
//Access element in copy of the stack ..
/*void  CreatStack(Stack s){
    s.top=0;
}*/
//OR...
//Access element in stack itself not its copy..
void  CreatStack(Stack *ps){
    ps->top=0;
}
//////////////////////////////////////////////ACCESSING MECHANISM2///////////////////////////////////////////////
/*void push(StackEntry e,Stack *ps){
ps->entry[ps->top]=e;
ps->top++;    //postfix
}*/
//OR...
void push(Stack_Entry item,Stack *ps) {
    ps->entry[ps->top++] = item;
}
//////////////////////////////////////////////ACCESSING MECHANISM3///////////////////////////////////////////////
int StackFull(Stack *ps){
    if(ps->top == MAX_STACK)
        return 1;
    else
        return 0;
}
//StackFull is PreCondition of push function..
//OR...
/*int StackFull(Stack *ps){
    return ps->top >= MAX;  == // return ps->top == MAX;
}*/
//////////////////////////////////////////////ACCESSING MECHANISM4///////////////////////////////////////////////
void pop(Stack_Entry *pe,Stack *ps)
{
    ps->top--;
    *pe=ps->entry[ps->top];
}
//OR..
/*void pop(StackEntry *pe,Stack *ps){
    *pe=ps->entry[--ps->top];
}*/
//////////////////////////////////////////////ACCESSING MECHANISM5///////////////////////////////////////////////
/* int StackEmpty(Stack s){
    return s.top==0; //return 1 if top is entry[0] itself....
}*/ //but we check by reference>>>

int  StackEmpty(Stack *ps){
    if(ps->top==0) //Empty
        return 1;
    else
        return 0;
}
//OR....
/*int  StackEmpty(Stack *ps){
    return !ps->top;
}*/
//////////////////////////////////////////////ACCESSING MECHANISM6///////////////////////////////////////////////
void StackTop(Stack_Entry *pe,Stack *ps){
    *pe=ps->entry[ps->top-1];
}
//////////////////////////////////////////////ACCESSING MECHANISM7///////////////////////////////////////////////
int StackSize(Stack *ps){
    return ps->top;
}
//////////////////////////////////////////////ACCESSING MECHANISM8/////////////////////////////////////////////
void ClearStack(Stack *ps){
    ps->top=0; //size after clear=0...
}
//////////////////////////////////////////////ACCESSING MECHANISM9/////////////////////////////////////////////
void TraverseStack(Stack *ps,void  (*pDisplay)(Stack_Entry)){
    for (int i = ps->top; i >0 ; i--) {
        (*pDisplay)(ps->entry[i-1]);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//=================================User Function =========================================//
/*void Display(Stack_Entry e){
    printf("The Element is : %d\n",e);
}*/

