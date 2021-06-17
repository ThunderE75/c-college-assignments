//t Basics of Array

#include<stdio.h>
#include<stdlib.h>
void main(){
    int p[5]={2,3,5,7,9};
    int q[5];
    //INPUTTING AN ARRAY
    printf("Enter 5 digits to save in an array \n"); 
    for(int j=0; j<5;j++){
        scanf("%d",&q[j]);
    }
    printf("\n\n");

    //PRINTING OF ARRAY
    for(int i =0; i<5; i++){
        printf("%d\n", q[i]);
    }
    printf("Sucess\n");
    for(int i =0; i<5; i++){
        printf("%d\n", p[i]);
    }
}