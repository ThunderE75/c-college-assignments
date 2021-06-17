//t Binary Search
//*Refrence https://www.programmingsimplified.com/c/source-code/c-program-binary-search

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
    int first,size,last,mid,search;
    system("cls");
    printf("Enter the size of the array: ");      //Inputing the size of the array.
    scanf("%d",&size);
    int arr[size];

    printf("\nEnter %d elements assending order\n",size); //Inputing the elements in the array
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element(%d/%d): ",i+1,size);
        scanf("%d",&arr[i]);
    }
    printf("\n\nEnter the Element that you want to search in the array: "); //Inputing the element that has to be searched
    scanf("%d",&search);
    
    first=0;
    last=size-1;
    mid=(first+last)/2;

    //h Binary Search Logic
    while(first<=last){
        if (arr[mid]<search)
            first=mid+1;
        else if (arr[mid]==search){
           printf("Elemement was present at index no. %d \n",mid+1);
           break;
        }
        else
            last=mid-1;
        mid=(first+last)/2;
    }   
    if (first>last)
        printf("\nElement was not found in the array!");
}