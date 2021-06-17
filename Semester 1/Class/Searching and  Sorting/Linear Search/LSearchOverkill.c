//t Linear Search

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(){
    int size,search,i,f=0;
    system("cls");

    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];

    printf("\nEnter the elements:\n\n");
    for (i = 0; i < size; i++){
        printf("Enter the element(%d/%d): ",i+1,size);
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter a digit that you want to search: ");
    scanf("%d",&search);
        
    //Array for LINEAR SEARCH
    for(i=0;i<5;i++){
        if(arr[i]==search){
            printf("The Value is found on Index %d\n\n",i+1);
            f=1;
        }
    }
    if (f!=1)
        printf("Value not found!");
}