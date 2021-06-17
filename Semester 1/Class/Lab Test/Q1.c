//t Write a program to print all the prime numbers between 1 to 200.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int flag=0;
    printf("The prime numbers between 0 and 200 are:\n");
    for (int i = 0; i < 200; i++){
    for (int j = 2; j <= i/2; ++j){
        if (i%j==0){
            flag=1;
            break;
        }             
    }
    if (flag==0)
        printf("%d\n",i);
    flag=0;
    } 
}