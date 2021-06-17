//t Linear Search

#include<stdio.h>
#include<stdlib.h>
void main(){
    int search,i,f=0;
    printf("Enter a digit that you want to search:\n");
    scanf("%d",&search);
    int arr[5]={2,8,9,4,6}; //Predetermined array
    
    //!Array for LINEAR SEARCH
    
    for(i=0;i<5;i++){
        if(arr[i]==search){
            printf("The Value is found on Index %d\n",i+1);
            f=1;
        }
    }
    if (f!=1)
        printf("Value not found!");

}