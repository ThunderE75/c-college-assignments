//t Que 14
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
   
void create();
void display();
void insert();
void delete();

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

int main(){
    system("cls");
    int choice;
    while(1){     
        printf("\nMENU\n");
        printf("x---------------x\n");
        printf("1- Create\n");
        printf("2- Display\n");
        printf("3- Insert\n");
        printf("4- Delete\n");
        printf("5- Exit\n");
        printf("\nEnter your choice:  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                printf("\nExit Successful");
                exit(0);
                break;
            default:
                printf("\n Wrong Choice:\nx-------------x\n");
                break;
        }
    }
    return 0;
}
void create(){
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("\nOut of Memory Space:\n");
        exit(0);
    }
    printf("Enter the data value for the node: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
                ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void display(){
    struct node *ptr;
    if(head==NULL){
        printf("\nList is empty.\n");
        return;
    }
    else{
        ptr=head;
        printf("\nThe List elements are: ");
        while(ptr!=NULL){
            printf("%d ",ptr->data );
            ptr=ptr->next ;
        }
    }
}

void insert(){
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the data value for the node: " );
    scanf("%d",&temp->data );
    temp->next =NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        ptr=head;
        while(ptr->next !=NULL){
            ptr=ptr->next;
        }
        ptr->next =temp;
    }
}

void delete(){
    struct node *temp,*ptr;
    if(head==NULL){
        printf("\nList is Empty: ");
        exit(0);
    }
    else if(head->next ==NULL){
        ptr=head;
        head=NULL;
        printf("\nThe deleted element is:%dt",ptr->data);
        free(ptr);
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        printf("\nThe deleted element is:%d\t",ptr->data);
        free(ptr);
    }
}