#include <stdlib.h>
#include <stdio.h>
void main(){
    int age;
    char name [20];
    printf("Enter your Name: ");
    scanf("%s", name );     //ther is no & sign because String is a Character array
    printf("Your name is %s\n", name);
    printf("Enter your age: ");
    scanf("%d",&age);       // & sign is required in every data type except if it's an array
    printf("Your age is:%d", age);
}

// SCANF Doesn't work with <blackspace>