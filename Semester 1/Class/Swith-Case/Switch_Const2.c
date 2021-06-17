#include<stdio.h>
#include<stdlib.h> 
void main(){         
    char i;
    printf("Enter a Character:\n");
    scanf("%c", &i);
    switch (i)
    {
    case 'x':
        printf("This is case x");
        break;
    
    case 'a':
        printf("This is Case A");
        break;
    
    case 'z':
        printf("This is Case 3");
        break;

    default:
        printf("This is the Default Case.");
        break;
    }
}