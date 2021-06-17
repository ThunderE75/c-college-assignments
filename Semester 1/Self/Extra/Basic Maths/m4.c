//t use of rand()
//* Refrence: https://www.youtube.com/watch?v=QCe2ks9b8YI&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=38&t=12s&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>

#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    system("cls");
    int rn;

    printf("Psedu random:");
    for (int  i = 0; i < 5; i++)
    {
        rn=(rand()%6)+1;
        printf("\n %d",rn);
    }

    printf("\n\n Absolutely random: ");
    for (int  i = 0; i < 5; i++)
    {
        rn=((rand()+time(0))%6)+1;
    printf("\n %d",rn);
    }
}

//h rand();
// rand() returns same number because it's actually a psedu random 
//generated from a specific constant seed and it's this way to help
// while debugging the program.

//h rand()+time(0);
// it resets the seed everytime the function is executed
// it's trully random

//h srand(positive_integer_number)
// it is used to specify the exact seed the program want
//you have to use srand(time(NULL)) once out of loop
// and then normally use rand()

//* Refrence: https://stackoverflow.com/questions/16569239/how-to-use-function-srand-with-time-h
