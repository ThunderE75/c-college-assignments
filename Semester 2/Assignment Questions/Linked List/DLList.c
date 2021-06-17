//t Que 19
//t C Program to Implement a Doubly Linked List & provide Insertion, Deletion & Display Operations
//* Refrence: https://www.sanfoundry.com/c-program-doubly-linked-list/ 
//h ^ only for basic struct

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    struct node *prev;
    int n;
    struct node *next;
}*h,*temp,*temp1,*temp2,*temp4;

void insert(); 
void display();
void search();
void delete();
int count = 0;

void main(){
    system("cls");
    int ch;
    h = NULL;
    temp = temp1 = NULL;
    while (1){
        printf("\n     MENU\nx--------------x");
        printf("\n 1- Insert");
        printf("\n 2- Delete");
        printf("\n 3- Display");
        printf("\n 4- Search");
        printf("\n 5- Exit");
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch){
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            exit(0);
        default:
            printf("\nWrong choice");
        }
    }
}

void insert(){
    if (h == NULL){
        create();
        h = temp;
        temp1 = h;
    }
    else{
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

void delete(){
    int i = 1, pos;
    printf("\nEnter position to be deleted : ");
    scanf("%d", &pos);
    temp2 = h;
    if ((pos < 1) || (pos >= count + 1)){
        printf("\nError : Position out of range to delete");
        return;
    }
    if (h == NULL){
        printf("\nError : Empty list no elements to delete");
        return;
    }
    else{
        while (i < pos){
            temp2 = temp2->next;
            i++;
        }
        if (i == 1){
            if (temp2->next == NULL){
                printf("Node deleted from list");
                free(temp2);
                temp2 = h = NULL;
                return;
            }
        }
        if (temp2->next == NULL){
            temp2->prev->next = NULL;
            free(temp2);
            printf("Node deleted from list");
            return;
        }
        temp2->next->prev = temp2->prev;
        if (i != 1)
            temp2->prev->next = temp2->next;    /* Might not need this statement if i == 1 check */
        if (i == 1)
            h = temp2->next;
        printf("\nNode deleted");
        free(temp2);
    }
    count--;
}

void display(){
    temp2 = h;
    if (temp2 == NULL){
        printf("List empty to display \n");
        return;
    }
    printf("\n Doubly Linked list: ");
    while (temp2->next != NULL){
        printf("%d ", temp2->n);
        temp2 = temp2->next;
    }
    printf(" %d ", temp2->n);
}

void search(){
    int data, count = 0;
    temp2 = h;
    if (temp2 == NULL){
        printf("\nError : List empty to search for data");
        return;
    }
    printf("\n Enter value to search : ");
    scanf("%d", &data);
    while (temp2 != NULL){
        if (temp2->n == data){
            printf("\nData found in %d position",count + 1);
            return;
        }
        else
             temp2 = temp2->next;
        count++;
    }
    printf("\nError : %d not found in list", data);
}