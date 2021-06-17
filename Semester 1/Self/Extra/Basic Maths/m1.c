//t Rounding using Floor and Ceil
//* Refrence: https://www.youtube.com/watch?v=XxwGqFaxJK0&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=36&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <math.h>   //Math functions


void main(){
    system("cls");
    double a = 67.242972;
    double b = 42.8;

    printf("Rounding up %f Result: %.2f\n",a,ceil(a));
    printf("Rounding up %f Result: %.2f\n\n",b,ceil(b));

    printf("Rounding down %f Result: %.2f\n",a,floor(a));
    printf("Rounding down %f Result: %.2f\n",b,floor(b));
}