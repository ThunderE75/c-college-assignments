//t Attempting to make a Password Generator
#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    srand(time(0));
    char nums[]={'0','1','2','3','4','5','6','7','8','9'};
    char* alpha_up ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* alpha_low="abcdefghijklmnopqrstuvwxyz";
    char special_char[]={'!','@','#','$'};
    char pass[12];

    system("cls");

    for (int i = 0; i < 12; i++)
        {
            int type = (rand()%4)+1;
            switch (type)
            {
            case 1:
                pass[i]=nums[(rand()%9)+1];
                break;
            case 2:
                pass[i]=alpha_up[(rand()%26)+1];
                break;

            case 3:
                pass[i]=alpha_low[(rand()%26)+1];
                break;

            case 4:
                pass[i]=special_char[(rand()%4)+1];
                break;
            
            default:
                break;
            }
        }
        
    printf("Random Password:\n");   
    for (int i = 0; i < 12; i++)
    {
        printf("%c",pass[i]);
    }
    
}