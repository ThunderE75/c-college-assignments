//t Limiting the input length of the string.
//* Refrence: https://www.youtube.com/watch?v=Y7R8m-10GJc&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=46&ab_channel=thenewboston
#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    char string[12];
    char *pString=string;   //saving the array pointer

    //it will work fine if the input the lower or 
    //equal to the length of the character array otherwise it will give an error.
    printf("Enter your first name:\n");
    gets(pString);
    puts(pString);

    // you can use fgets() insted to limit the input and avoid overflow.
    printf("Enter your full name:\n");
    fgets(pString,12,stdin);
    puts(pString);

}