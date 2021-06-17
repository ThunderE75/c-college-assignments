//t De-refrencing a pointer
//* Refrence: https://www.youtube.com/watch?v=vjq-13YADeI&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=43&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    int jack = 19;
    int *pJack = &jack;
    system("cls");
    printf("M-Address\tName\tValue\n");
    printf("%p\t%s\t%d\n",&jack,"jack",jack); 
    printf("%p\t%s\t%p\n\n",&pJack,"pJack",pJack);

    //h De-refrencing
    printf("*pTuna: %d \n\n",*pJack);
    //Using Astrisk(*) takes the value of the variable to which the pointer is pointing to
    //so, basically *pJack = jack = 19; so you can use either.
    //so reinitilizing either their values will result in both getting the new value 
    *pJack=75; //Astrisk (*) is important.
    printf("*pjack: %d\n",*pJack);
    printf("jack: %d\n",jack);
}