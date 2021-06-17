#include<stdio.h>
#include<stdlib.h> 
void main(){         
    int i;
    printf("Enter a number:\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("This is case 1");
        break;
    
    case 2:
        printf("This is Case 2");
        break;
    
    case 3:
        printf("This is Case 3");
        break;

    default:
        printf("This is the Default Case.");
        break;
    }
}