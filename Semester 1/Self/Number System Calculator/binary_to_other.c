//t To build a calculator that converts Binary numbers to other number systems

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

int convert_dec();
int convert_octal();
void main(){
    long long binary_input;
    printf("Enter a Binary number:\t");
    scanf("%lld",&binary_input);
    printf("\n%lld in Deciaml is: \t\t%d",binary_input,convert_dec(binary_input));
    printf("\n%lld in Octal is: \t\t%d",binary_input,convert_octal(binary_input));

    //h for hexa
    long int decimalNumber,remainder,quotient;
    int i=1,j,temp;
	char hexadecimal[100];
	quotient = convert_dec(binary_input);
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
    printf("\n%lld in Hexadeciaml is: \t",binary_input);
	for (j = i -1 ;j> 0;j--)
	    printf("%c",hexadecimal[j]);
    printf("\n");
}

//h Binary to Decimal
int convert_dec(long long binary_input) {
    int decimal = 0, i = 0,temp=0;
    while (binary_input != 0) {
    temp = binary_input % 10;
        binary_input /= 10;
        decimal += temp * pow(2, i);
        ++i;
    }
    return decimal;
}

//h Binary to Octal
int convert_octal(long long binary_input){
    int oct = 0, dec = 0, i = 1;
    dec=convert_dec(binary_input);

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}
