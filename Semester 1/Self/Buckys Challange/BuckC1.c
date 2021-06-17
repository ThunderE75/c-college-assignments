//t A program to check if a PASSWORD is Secure or not.
//* Refrence: https://youtu.be/PVTDEOeSP88?t=144

#include<stdio.h>
// #include<stdlib.h>
#include<conio.h>
#include<ctype.h>

void main(){
    char pass[50];
    int up,lo,sc,d;
    up=lo=d=sc=0;
    system("cls");

    printf("Enter a Strong password that contains uppercase and lowecase letters, integers and a $ sign: \n");
    scanf("%s", pass);

    printf("The entered password is: %s",pass);


    for (int i = 0; i < strlen(pass); i++){
        if (isupper(pass[i]))
            up=1;
        if (islower(pass[i]))
            lo=1;
        if (isdigit(pass[i]))
            d=1;
        if ((pass[i])=='$')
            sc=1;
    }

    //was used for debugging.
    // printf("\nUP: %d\n",up);
    // printf("Lo: %d\n",lo);
    // printf("D: %d\n",d);
    // printf("SC: %d\n",sc);

    if (up*lo*d*sc!=0)
        printf("\nIt's a Strong password!");
    else 
        printf("\nIt's a Weak password!");
}