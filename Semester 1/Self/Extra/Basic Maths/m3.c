//t Use of Power and Square root
//* Refrence: https://www.youtube.com/watch?v=VcEHkVStszM&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=37&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    int power=0,root=0;
    power=pow(5,3);
    root=sqrt(256);
    printf("5^3 is equal to: %d\n",power);
    printf("Square root of 256 is equal to: %d\n",root);   
}