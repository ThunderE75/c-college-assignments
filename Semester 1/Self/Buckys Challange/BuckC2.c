//t Bucky's Challange #2 : Dice game plus blackjack
//* Refrence: https://youtu.be/QCe2ks9b8YI?t=308

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    system("cls");
    int dice,temp,reroll;
    char choice;
    dice=temp=0;
    srand(time(0)); //h to actually randomize the rolls

    for (int i = 0; i < 3; i++){ //first 3 rolls
        temp=(rand()%6)+1;
        dice+=temp;
        printf("You rolled %d\n",temp);
    }

    printf("\nYour Total: %d\n",dice);  //1st rolls results
    reroll=0;
    
    for (int i = 0; i < 3; i++){    //2nd rolls
        temp=(rand()%6)+1;
        reroll+=temp;
    }

    printf("\nEnter 'h' if you think the reroll wil be higer, or 'l' for lower or 's' for same: \n");   //blackjack part
        scanf("%c",&choice);
    printf("your choice was: %c\n", choice);    // inputing the choice
    switch (choice)
    {
    case 'h':
        if(reroll>dice)
            printf("You are correct!");
        else
            printf("Better luck next time!");
        break;
    case 'l':
        if (dice>reroll)
            printf("You are correct!");
        else
            printf("Better luck next time!");
        break;
    case 's':
        if (dice==reroll)
            printf("Damn, that's lucky!");
        else
            printf("Better luck next time!");
        break;
    default:
    printf("INVALID CHOICE!");
        break;
    }
    printf("\nThe reroll was: %d",reroll);

}