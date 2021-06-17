//t Trying to understand structure.
//* Refrence: https://www.youtube.com/watch?v=VMFKz7Klx7I&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=49&ab_channel=thenewboston

#include<stdio.h>
#include<stdlib.h>
#include "staff_temp.h"

//Optional Headers:
#include <string.h> //String functions
#include <ctype.h>  //Character Handling Functions
#include <math.h>   //Math functions
#include <conio.h>  //console input/output

void main(){
    //_    staff_temp <== it's just the name of the template structure 
    struct staff_temp jack;  // followed by User/instance identifier.
    struct staff_temp emily;

    // you can access the members of an instance using the DOT[.] operator
    jack.userID=1;
    emily.userID=2;
    //you can treat this just like a variable


    printf("Enter the First Name of User 1:\n");
    fgets(jack.firstName,25,stdin);
    printf("Enter the First Name of User 2:\n");
    fgets(emily.firstName,25,stdin);

    printf("UserID of user 1 is : %d\n",jack.userID);
    printf("First Name of user 2 is : %s\n",emily.firstName);
}