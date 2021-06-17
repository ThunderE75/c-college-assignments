//t A Program to understand Typecasting in C
//* Refrence: https://www.youtube.com/watch?v=ohVRskLlHqM&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    float avgProfit;
    int price=10;
    int sales = 69;
    int days_worked=7;

    avgProfit = ((float)price*(float)sales)/(float)days_worked;
    //h     (float) is used to temproraly for converting the data type to float from int. 

    printf("Avrage Profit: %.2f\t",avgProfit); 

    //h .2 is there for the number of significant figures
    //h %f is used insted of %d for float vlues
}