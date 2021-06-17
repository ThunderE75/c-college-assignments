//t To build a calculator that converts Decimal numbers to other number systems

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output


int convert_octal();
void main(){
    int decimal_input;
    printf("Enter a Decimal number:\t");
    scanf("%lld",&decimal_input);
    
    //h Calculation for octal
    int oct = 0, dec = 0, i = 1;
    dec=decimal_input;
    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    dec=decimal_input;
    //h For binary
    long long bin = 0;
        int rem, step = 1;
        i = 1;
        while (dec != 0) {
            rem = dec % 2;
            // printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
            dec /= 2;
            bin += rem * i;
            i *= 10;
        }

    printf("\n%d in Binary is: \t%d",decimal_input,bin);
    printf("\n%d in Octal is: \t%d",decimal_input,oct);

    //h for hexa
    long int remainder,quotient;
    int j,temp;
    i=1;
	char hexadecimal[100];
	quotient = decimal_input;
	while(quotient!=0) {
		temp = quotient % 16;
		//_ to convert integer into character
		if( temp < 10)
            temp += 48; 
        else
		    temp += 55;
		hexadecimal[i++]= temp;
		quotient = quotient / 16;
	}
    //h Printing Hexa
    printf("\n%d in Hexadeciaml is: \t",decimal_input);
	for (j = i -1 ;j> 0;j--)
	    printf("%c",hexadecimal[j]);
    printf("\n");


}