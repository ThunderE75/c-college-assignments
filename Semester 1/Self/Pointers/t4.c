//t String Variable using pointers and not a char array
//* Refrence: https://www.youtube.com/watch?v=-9fqo94G6YU&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=45&ab_channel=thenewboston
//x it's not easy, use refrence to revise.
//Notes:
//Array_name without index is just a pointer to the first element and you 
//can't just copy a array like a string without using the strcpy() function
//so you can use a pointer char variable and treat it as a string and use 
//equals to (=) sign to copy.
//but remenber, pointer variable just store the first char of the string so, 
//and you can use the puts() func. to print the array so it just start
// printing until it reaches the NULL Char.

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <conio.h>  //console input/output

void main(){
    char Name[]={"Navneet Prakash Dubey"};
    char *pName= {"Dubey Navneet"};
    puts(pName);

    //you can treat it as a varible 
    pName="Navneet";
    puts(pName);
}