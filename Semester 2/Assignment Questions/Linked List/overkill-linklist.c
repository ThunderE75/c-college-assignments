//t Linked List
//x OVERKILL

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void create();
void display();
void insert_begin();
void insert();
void insert_pos();
void delete_begin();
void delete();
void delete_pos();

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
int main(){
    printf("cls");
    int choice;
    while(1){     
        printf("\nMENU\n");
        printf("-----------------------------------\n");
        printf("1- Create\n");
        printf("2- Display\n");
        printf("3- Insert at the beginning\n");
        printf("4- Insert at the end\n");
        printf("5- Insert at specified position\n");
        printf("6- Delete from beginning\n");
        printf("7- Delete from the end\n");
        printf("8- Delete from specified position\n");
        printf("9- Exit\n");
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
                insert_begin();
                break;
            case 4:
                insert();
                break;
            case 5:
                insert_pos();
                break;
            case 6:
                delete_begin();
                break;
            case 7:
                delete();
                break;
            case 8:
                delete_pos();
                break;
            case 9:
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
        printf("\nOut of Memory Space.\n");
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
void insert_begin(){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("\nOut of Memory Space.\n");
        return;
    }
    printf("Enter the data value for the node: " );
    scanf("%d",&temp->data);
    temp->next =NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
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
void insert_pos(){
    struct node *ptr,*temp;
    int i,pos;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the position for the new node to be inserted:\t");
    scanf("%d",&pos);
    printf("\nEnter the data value of the node:\t");
    scanf("%d",&temp->data) ;

    temp->next=NULL;
    if(pos==0){
        temp->next=head;
        head=temp;
    }
    else{
        for(i=0,ptr=head;i<pos-1;i++) { ptr=ptr->next;
            if(ptr==NULL){
                printf("\nPosition not found:[Handle with care]\n");
                return;
            }
        }
        temp->next =ptr->next ;
        ptr->next=temp;
    }
}
void delete_begin(){
    struct node *ptr;
    if(ptr==NULL){
        printf("\nList is Empty:\n");
        return;
    }
    else{
        ptr=head;
        head=head->next ;
        printf("\nThe deleted element is :%d\t",ptr->data);
        free(ptr);
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
void delete_pos(){
    int i,pos;
    struct node *temp,*ptr;
    if(head==NULL){
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else{
        printf("\nEnter the position of the node to be deleted:\t");
        scanf("%d",&pos);
        if(pos==0){
            ptr=head;
            head=head->next ;
            printf("\nThe deleted element is:%d\t",ptr->data  );
            free(ptr);
        }
        else{
            ptr=head;
            for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                if(ptr==NULL){
                    printf("\nPosition not Found:\n");
                    return;
                }
            }
            temp->next =ptr->next ;
            printf("\nThe deleted element is:%d\t",ptr->data );
            free(ptr);
        }
    }
}