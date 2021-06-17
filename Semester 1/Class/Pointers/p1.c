//t Understanding pointer
#include<stdio.h>
#include<stdlib.h>

void main(){
    float a;
    float *b;
    b=&a;
    printf("Enter a float value:");
    scanf("%f",&a);
    printf("\nvalue of a= %.2f",a);     
    printf("\nAddress of a using b as pointer= %zu",b);      // %uz for printing memory address
    printf("\nValue of a  using b as pointer =%.2f",*b);     // astrisk for refrencing the actual value of a 
    printf("\nAddress of b = %zu",&b);                       //Address of b using %zu and & sign to get where the memory is stored
}