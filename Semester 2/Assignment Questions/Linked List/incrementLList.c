//t Que 18
//t Write a program to increment the data part of every node present in a linked list by 10. Display the data both before incrimination and after.

#include <stdio.h>  
#include <stdlib.h>  

void addNode(int data);
void display();
void increment();

//Represent a node of singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
    
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  

int main(){
    int choice,data;  
    system("cls"); 
    while(choice != 4){     
        printf("\nMenu\n----------\n");  
        printf("1- Add Node\n2- Display\n3- Display Increment (+10)\n4- Exit\n");  
        printf("Enter your choice: ");  
        scanf("%d",& choice);  
        switch(choice){  
            case 1:  
                printf("\nEnter the value of the node: ");
                scanf("%d",&data);
                addNode(data);  
                break;  
            case 2:
                printf("\nNodes of singly linked list\nx--------------------x\n");
                display();
                break;  
            case 3:  
                increment();
                break;  
            case 4:  
                printf("\nEXIT Successful");
                exit(0);  
                break;  
            default:   
                printf("\nInvalid Choice.\n");  
        }  
    }  
    return 0;  
}  

//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
        
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
}  

void increment(){
    struct node *current = head;

    if(head == NULL) {  
        printf("Error: List is empty\n");  
        return;  
    }  
    while(current != NULL) {  
        //Prints each node by incrementing pointer
        current->data = current->data+10;  
        current = current->next;  
    }  
    printf("Increment Successful!\n");  
    printf("\nNodes of singly linked\nlist incresed by 10: \n"); 
    display();
}

//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct node *current = head;  
        
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}