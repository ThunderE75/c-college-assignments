//t Trying out isUpper() and isLower()
//* Refrence: https://www.youtube.com/watch?v=IJp4KU7SiuQ&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=32&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void main(){
    system("cls");
    int var='A'; // You can use INT to Store character as well but have to use %c as format specifier

    if (isalpha(var)){   // Returns true if the Variable is a character
        printf("%c is an Alphabet.\n",var);   // %c as Character format specifier
        if (isupper(var)){          // checks if it's Upper case or not
            printf("%c is Upper case.");
        }
    }
    else if(isdigit(var)){  //Checks if it is a digit or not
        printf("%d is a Digit.",var);
    }
}