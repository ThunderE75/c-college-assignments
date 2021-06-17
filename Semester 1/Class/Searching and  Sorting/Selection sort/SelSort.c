//t Selection Sort
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
void main(){
    system("cls");
    printf("Enter 10 elements in random order: \n"); //Inputting Elements from the user
    int arr[10];
    for (int i = 0; i < 10; i++)
        scanf("%d",&arr[i]);
    
    int temp;
    printf("\n");
    printf("Current Array:\n"); //printing the current array
    for (int k = 0; k < 10; k++)
        printf("%d ",arr[k]);

    printf("\n");

    //h Selection Sort logic
    for (int i = 0; i < 9; i++)         //Since size of array is 10, it takes size-1 itration to sort so the loop ends at size-1
        for (int j = i+1 ; j <= 9; j++){     // j <= 9 IMPORTANT
            if(arr[i]>arr[j]){  //Swaping
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    printf("Sorted array:\n");      //Printing the sorted array
    for (int k = 0; k < 10; k++)
        printf("%d ",arr[k]);
    printf("\n\n");
    
}