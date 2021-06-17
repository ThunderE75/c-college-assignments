//t Appends to an already existing file

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    system("cls");
    FILE * fPointer;
    char singleLine[150];

    fPointer=fopen("test.txt","a"); // a<= A to append

    //h Append this to the end
    fprintf(fPointer,"\n By Navneet Dubey");

    printf("\n\nTask Successful!");

    fclose(fPointer);

}