//t Que 12
//t C Program to Implement a Queue using an Array
//* Refrence: https://www.sanfoundry.com/c-program-queue-using-array/

#include <stdio.h>
#include <conio.h>
#define MAX 50
void insert();
void delete ();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;

main(){
    int choice;
    system("cls");
    while (1){
        printf("Menu\nx---------------x\n");
        printf("1- Insert\n");
        printf("2- Delete\n");
        printf("3- Display\n");
        printf("4- Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            insert();
            break;

        case 2:
            delete ();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);

        default:
            printf("Wrong choice \n");

        }
    }
} 

void insert(){
    int add_item;
    if (rear == MAX - 1)
        printf("Queue Overflow \n");

    else{
        if (front == -1)
            front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

void delete (){
    if (front == -1 || front > rear){
        printf("Queue Underflow \n");
        return;
    }
    else{
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }

}

void display(){
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else{
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}