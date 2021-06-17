//t Working of string
#include<stdio.h>
#include <stdlib.h>
int main(){
    char name1[11]="Jack Black"; //initialization with fixed memory
    printf("%s\n", name1);

    name1[1] ='o';  //Modifing certain Char at a sepecific Index
    printf("%s\n",name1);

    char name2 [] ="Navneet Prakash";   //Initilization without specifying the memory size
    printf("%s\n", name2);

    strcpy(name2 , "Navneet Dubey");    //Modifing the value of the array
    printf("%s\n", name2);

    return 0;
}