//t Random Password Generation (Concept) using pointers insted of arrays
//this was just a concept program
#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    char nums[]={'0','1','2','3','4','5','6','7','8','9'};
    char* alpha_up ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* alpha_low="abcdefghijklmnopqrstuvwxyz";
    char special_char[]={'!','@','#','$'};
    char pass[8];
    srand(time(0));
    pass[0]=nums[(rand()%9)+1];
    pass[1]=alpha_up[(rand()%26)+1];
    pass[2]=special_char[(rand()%4)+1];
    pass[3]=nums[(rand()%9)+1];
    pass[4]=nums[(rand()%9)+1];
    pass[5]=alpha_low[(rand()%26)+1];
    pass[6]=alpha_up[(rand()%26)+1];
    pass[7]=nums[(rand()%9)+1];
    pass[8]=special_char[(rand()%4)+1];
    system("cls");
    printf("Pass: ");   
    for (int i = 0; i < 8; i++)
    {
        printf("%c",pass[i]);
    }
}