//t Que 15
//t Stack implementation using linked list, push, pop and display in C
//* Refrence: https://codeforwin.org/2018/08/stack-implementation-using-linked-list-push-pop.html

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>     // For INT_MIN
#define CAPACITY 10000

// Define stack node structure
struct stack {
    int data;
    struct stack *next;
} *top;

int size = 0;
void push(int element);
int  pop();

int main(){
    system("cls");
    int choice, data;
    while(1)
    {
        /* Menu */
        printf("\nMENU\n");
        printf("---------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("---------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2: 
                data = pop();
                if (data != INT_MIN)
                    printf("Data => %d\n", data);
                break;
            case 3: 
                printf("Stack size: %d\n", size);
                break;
            case 4: 
                printf("EXIT Successful.");
                exit(0);
                break;
            default: 
                printf("\nInvalid choice, please try again.");
        }
    }
    return 0;
}

void push(int element){
    // Check stack overflow
    if (size >= CAPACITY){
        printf("\nStack Overflow, can't add more element to stack.");
        return;
    }
    struct stack * newNode = (struct stack *) malloc(sizeof(struct stack));
    newNode->data = element;
    newNode->next = top;        
    top = newNode;
    size++;
    printf("Data pushed to stack.");
}
int pop(){
    int data = 0;
    struct stack * topNode;
    if (size <= 0 || !top){
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    topNode = top;
    data = top->data;
    top = top->next;
    free(topNode);
    size--;
    return data;
}