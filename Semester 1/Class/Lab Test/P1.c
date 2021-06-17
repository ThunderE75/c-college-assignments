//t Questtion 1: Bubble Sort
//Dec 17, 2020

#include<stdio.h>
#include<stdlib.h>
void main(){
    int size,temp;

    printf("Enter how many number you want to sort: \n");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements: \n",size);
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);

    // Bubble Sort logic
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