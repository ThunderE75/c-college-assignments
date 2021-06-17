//t trying to read text from a file

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

    fPointer=fopen("test.txt","r");// file name shoud be the file you want to read data from
    
    
    //h Printing from the file
    while (!feof(fPointer)){ // Continue the loop untill NOT End Of File (line) (FEOF)
        fgets(singleLine,150,fPointer);
        puts(singleLine);
    }

    //h About the extra new lines.
    // in text editors, new line is made with \n so everytime you run the puts() func. 
    //it adds an extra line.   
    
    fclose(fPointer);
}