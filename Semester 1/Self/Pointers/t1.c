//t Understanding pointers
//* Refrence: https://www.youtube.com/watch?v=5BpYD7TxvKU&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=42&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    int jack = 19;
    system("cls");
    printf("M_Address\tName\tValue\n");

    //h %p is the format specifier for pointer variables 
    //h Ampersant(&) is used to access the Memory address of a variable
    printf("%p\t%s\t%d\n",&jack,"jack",jack); // for the 2nd specifier we put the name of the variable in double quotes to put it as a string
    //h Astrisk(*) is used to assign special variables like Pointers 
    int *pJack = &jack;  //in this case we use & to store the pointer of jack in pJack
    //use the data type where the pointer is pointing to
    //h starting a pointer with a small p and then the variable name wher it's pointing to is a common convention 
    printf("%p\t%s\t%p\n\n",&pJack,"pJack",pJack);

}