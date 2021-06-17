#include<stdio.h>
#include<stdlib.h> 
void main(){         
    char i;
    printf("Enter an Alphabet:\n");
    scanf("%c", &i);
    switch (i)
    {
    case 'A':
    case 'a':
        printf("This is case A");
        break;
    
    case 'B':
    case 'b':
        printf("This is Case B");
        break;
    
    case 'C':
    case 'c':
        printf("This is Case C");
        break;

    default:
        printf("This is the Default Case.");
        break;
    }
}