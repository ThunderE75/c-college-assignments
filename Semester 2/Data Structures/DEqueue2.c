//t Write a menu driven program of Double Ended Queue that will have options for all operations like - Addrear, Addfront, Removerear, Removefront, Display, exit.
//* Refrence 1: [Theory] https://www.geeksforgeeks.org/deque-set-1-introduction-applications/
//* Refrence 2: [Program] https://www.thecrazyprogrammer.com/2014/02/c-program-for-various-operations-on-a-dequeue-represented-using-a-circular-array.html

//x TOO COMPLICATED/OverKILL

#include<stdio.h>
#include<process.h>
#include<conio.h>
#define MAX 30
 
typedef struct dequeue
{
	int data[MAX];
	int rear,front;
}dequeue;
 
void initialize(dequeue *p);
int empty(dequeue *p);
int full(dequeue *p);
void enqueueR(dequeue *p,int x);
void enqueueF(dequeue *p,int x);
int dequeueF(dequeue *p);
int dequeueR(dequeue *p);
void print(dequeue *p);
 
void main()
{
	int i,x,op,n;
	dequeue q;
	initialize(&q);
	system("cls");

	do
	{   
        printf("\nMENU\n----------------\n");
		printf("1-Create\n2-Insert Rear\n3-Insert Front\n4-Delete Rear\n");
		printf("5-Delete Front\n6-Display\n7-Exit\n\nEnter your choice: ");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1: printf("\nEnter the size of DE Queue: ");
					scanf("%d",&n);
					initialize(&q);
								
					for(i=0;i<n;i++){
                        printf("Enter an element (%d/%d): ",i+1,n);
						scanf("%d",&x);
						if(full(&q)){
							printf("\nQueue is FULL.");
							exit(0);
						}
						enqueueR(&q,x);
					}
					break;
					
			case 2: printf("\nEnter element to be inserted: ");
					scanf("%d",&x);
							
					if(full(&q)){
						printf("\nQueue is FULL.");
						exit(0);
					}
					enqueueR(&q,x);
					break;
                
			case 3: printf("\nEnter the element to be inserted in front:");
					scanf("%d",&x);
							
					if(full(&q)){
						printf("\nQueue is FULL.");
						exit(0);
					}
					
					enqueueF(&q,x);
					break;
							
			case 4: if(empty(&q)){
						printf("\nQueue is Empty.");
						exit(0);
					}
							
					x=dequeueR(&q);
					printf("The Element %d was deleted from the Rear\n",x);
					break;
					
			case 5: if(empty(&q)){
						printf("\nQueue is Empty.");
						exit(0);
					}
							
					x=dequeueF(&q);
					printf("\nThe Element %d was deleted from the Front\n",x);
					break;
							
			case 6: print(&q);
					break;
					
			default: break;
		}
	}while(op!=7);
}
 
void initialize(dequeue *P){
	P->rear=-1;
	P->front=-1;
}

int empty(dequeue *P){
	if(P->rear==-1)
		return(1);
	
	return(0);
}
 
int full(dequeue *P){
	if((P->rear+1)%MAX==P->front)
		return(1);
	
	return(0);
}
 
void enqueueR(dequeue *P,int x){
	if(empty(P)){
		P->rear=0;
		P->front=0;
		P->data[0]=x;
	}
	else{
		P->rear=(P->rear+1)%MAX;
		P->data[P->rear]=x;
	}
}
 
void enqueueF(dequeue *P,int x){
	if(empty(P)){
		P->rear=0;
		P->front=0;
		P->data[0]=x;
	}
	else{
		P->front=(P->front-1+MAX)%MAX;
		P->data[P->front]=x;
	}
}
 
int dequeueF(dequeue *P){
	int x;
	x=P->data[P->front];
	if(P->rear==P->front)	//delete the last element
		initialize(P);
	else
		P->front=(P->front+1)%MAX;
	return(x);
}
 
int dequeueR(dequeue *P){
	int x;
	x=P->data[P->rear];
	if(P->rear==P->front)
		initialize(P);
	else
		P->rear=(P->rear-1+MAX)%MAX;
	return(x);
}
 
void print(dequeue *P){
	if(empty(P)){
		printf("\nQueue is Empty.");
		exit(0);
	}
	
    int i;
	i=P->front;
	
    while(i!=P->rear){
		printf("\n%d",P->data[i]);
		i=(i+1)%MAX;
	}
	
    printf("\n%d\n",P->data[P->rear]);
}