//t Use of Absolute
//* Refrence: https://www.youtube.com/watch?v=VcEHkVStszM&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=37&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>

//Optional Headers:
#include <math.h>   //Math functions

void main(){
    int y,z,age;
    printf("Enter your birth year:\n");
    scanf("%d",&y);
    printf("Enter another year:\n");
    scanf("%d",&z);
    age=y-z;
    printf("Age: %d\n",age);
    age=abs(y-z);
    printf("Age: %d",age);

}
