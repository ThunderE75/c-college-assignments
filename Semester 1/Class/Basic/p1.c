//t Exponent program
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
//x NOT Working correctly
//* Refrence: https://stackoverflow.com/questions/35658441/power-function-returns-1-less-result

void main(){
    int x,y,exp;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);

    //printing
    printf("%d ^ %d = %d \n", x,y, exponent(x,y));
}

int exponent(int x,int y){
    int exp = pow(x,y);
    return exp;
}