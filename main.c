/*************************************************************************************************************************************************************/
/* File Name : Main.c                                                                                                                                        */
/* File Info. : This File contains Functionality of this Application                                                                                          */
/* Version :V1.0                                                                                                                                            */
/* Data : 2 december 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Queue0.h"
#include "Stack0.h"
#include "APPLICATION.h" //Because it has the (element type : student , patient,...)and maximum type..

void display(element_type e){
    printf("Car model year : %d\t Customer id :%d \t Customer name :%s\n--------------------\n",
           e.model,e.id,e.name);
}
int main() {
    int selection;
    element_type e1;  //e1 is an object of struct..
    Queue_Type customer_data;
    Stack s;
    CreatStack(&s);
    CreatQueue(&customer_data);
    printf("\t\t\t======================== Cars WorkShops ======================\t\t\n");
    while (1){ //make only user end program..

        printf("Choose one of the following option  :  \n");
        printf("[1] ADD a new customer \n");
        printf("[2] Serve a customer \n");
        printf("[3] Display  customer info    \n");
        printf("[4] Display  customer in the most recent order   \n");
        printf("[5] EXIT menu . \n");
        printf("Ur option :  \n");
        scanf("%d",&selection);

        system("cls"); //clear console screen for better look..

        if(selection==1){

            printf("Enter the model year of car : ");
            scanf("%d",&e1.model);
            printf("Enter the customer id : ");
            scanf("%d",&e1.id);
            printf("Enter the customer name : ");
            scanf("%s",&e1.name);
            Append(e1,&customer_data);
            push(e1,&s);
            system("cls");


        }
        else if(selection==2){
            {
                //pre-condition..
                while(!QueueEmpty(&customer_data)){
                    printf("The customer has been served.\n");
                    Serve(&e1,&customer_data);
                    printf("Car model year : %d\t Customer id :%d \t Customer name :%s\n--------------------\n",
                           e1.model,e1.id,e1.name);
                }
            }
        }
        else if(selection==3){
            TraverseQueue(&customer_data,&display);

        }
        else if(selection==4){
            TraverseStack(&s,&display);

        }
        else if(selection==5){
            return 0;
        }

    }
    return 0;
}