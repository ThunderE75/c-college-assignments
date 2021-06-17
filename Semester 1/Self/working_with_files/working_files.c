//t Exprementin g with file creation.
//* Refrence: https://www.youtube.com/watch?v=38I_AUMpKpQ&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=50&ab_channel=thenewboston

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
    fPointer=fopen("test.txt","w"); // Opens the file "Test.txt" and W <= to write
    //h Some modes:
    //      w <== overwrites
    //      a <== appends
    //      r <== reads
    fprintf(fPointer,"Jack is cool!\n");

    fclose(fPointer);
    printf("TASK SUCCESSFUL!");
}