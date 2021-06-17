#include<stdio.h>
#include<stdlib.h>
void main(){
    int first,size,last,mid,search;

    printf("Enter the size of the array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements assending order\n",size);
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element that you want to search in the array\n");
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