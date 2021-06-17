//t Bubble Sort
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
    int size,temp;
    system("cls");
    printf("Enter how many number you want to sort: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements: \n",size);
    for (int i = 0; i < size; i++){
        printf("Enter the Element(%d/%d): ",i+1,size);
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);

    //h Bubble Sort logic
   for(int i=0;i<size-1;i++){       //size-1 because no of pass is equal to size -1
      for(int j=0;j<size-i-1;j++){  //j<size-i-1 because the last element is always sorted first
        if(arr[j]>arr[j+1]){
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
      }
   }

    printf("\nSorted array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
}