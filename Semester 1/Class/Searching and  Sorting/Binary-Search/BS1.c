//t Binary Search
//*Refrence https://www.programmingsimplified.com/c/source-code/c-program-binary-search

#include<stdio.h>
#include<stdlib.h>
void main(){
    int first,size=10,last,mid,search;
    int arr[]= {2,4,6,8,10,12,14,16,18,20};
    printf("Enter the Element that you want to search in the array\n");     //Inputing the element that has to be searched
    scanf("%d",&search);
    
    first=0;
    last=size-1;
    mid=(first+last)/2;

    //h Binary Search Logic

    while(first<=last){
        if (arr[mid]<search)
            first=mid+1;
        else if (arr[mid]==search){
           printf("Elemement was present at index no. %d\n",mid+1);
           break;
        }
        else
            last=mid-1;
        mid=(first+last)/2;
    }   
    if (first>last)
        printf("Element was not found in the array!");
}