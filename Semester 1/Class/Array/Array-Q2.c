//t A program To initialize and input values of array and find A specific Element in the array

#include<stdio.h>
#include<stdlib.h>
void main(){
    int size;
    int flag=0;
    int index;
    int search;
    printf("Enter the Size of the array\n");
    scanf("%d",&size);
    int arr[size];

    printf("Enter %d elements:\n",size);//inputing elements
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The elements in the array are:\n"); //Printing
    for(int j=0;j<size;j++){
        printf("%d\n",arr[j]);
    }

    printf("Enter the element that you want to search in the array\n");
    scanf("%d",&search);
    printf("You are now searching for %d\n",search);

    for(int k = 0; k <= size; k ++){
        if(arr[k]==search){
            flag=1;
            index=k;
            break;
        }
    }
    printf("Value of flag is : %d\n",flag);

    if(flag==1)
        printf("The element was present in the index no: %d",index+1);
    else
        printf("The element was not found!");
}