//t Program to try basic string fuctions
//* Refrence: https://www.programiz.com/c-programming/c-strings
//* Basic String fuction: https://www.programiz.com/c-programming/string-handling-functions 

#include<stdio.h>
#include<stdlib.h>
#include <string.h>


void main(){
    char name[30];
    char name_copy[30];


    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    //h Since Scanf doesn't conider anything after whitespace we use fgets()
    //? We use  sizeof(name)  to limit the input size. using just  gets() will result in overflow.
    //? stdin is just a part of fuction.


    strcpy(name_copy,name); //Just to copy a string

    printf("Length of string a = %zu \n",strlen(name)-1);
    //h strlen(Char_name_array) is the used to get the length of the string 
    // %zu is a format specifier is used for unspecidied integer

    printf("Name: ");
    puts(name);    //* display string ( Just a premitive printf() ) it doesn't have formating and has a \n  built-in.
}