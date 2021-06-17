#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void create();
void display();
void insert_pos();

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

int main(){
    int choice;
    system("cls");
    while(1){     
        printf("\nMENU\n");
        printf("x-----------------x\n");
        printf("1- Create\n");
        printf("2- Display\n");
        printf("3- Insert Middle\n");
        printf("4- Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        //menu logic
        switch(choice){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3: 
                insert_pos();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n Wrong Choice\nx-------------x\n");
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

void insert_pos(){
    struct node *ptr,*temp;
    int i,pos;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the position for the new node to be inserted: ");
    scanf("%d",&pos);
    printf("\nEnter the data value of the node: ");
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