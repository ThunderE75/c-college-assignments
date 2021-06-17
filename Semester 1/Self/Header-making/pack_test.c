//t Program for practicing making of package and understand it's working.
//* Package created for this was named pack_make.h

#include <stdio.h> //For default package
#include "pack_make.h" //Double Quotes for local package

int main(){
    int legal = (AGE/2) +7;
    printf("%s is legally allowed %d",MYNAME,legal);
}