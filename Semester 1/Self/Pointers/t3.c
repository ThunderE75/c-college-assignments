//t Understanding pointers in Array
//* Refrence: https://www.youtube.com/watch?v=sq6n8dL117c&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=44&ab_channel=thenewboston
#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    int arr[5]={53,26,74,47,32};
    system("cls");
    printf("Array\tAdderess\tValue\n");
    for (int i = 0; i < 5; i++)
        printf("arr[%d]\t%p\t%d\n",i,&arr[i],arr[i]);
    
    //array_name without the index is just pointer for the first element
    printf("\narr\t\t%p\n",arr);

    //derefrencing it gives theh value of the first element
    printf("*arr\t\t%d\n",*arr);

    //you can use addition to chnage the element but you need to use the (Brackets)
    printf("(arr+3)\t\t%p\n",(arr+3));
}