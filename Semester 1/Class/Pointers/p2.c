//t Swaping usibg function and pointers

#include<stdio.h>
#include<stdlib.h>

void swap(int *p1, int *p2){
    int temp;
    temp=*p2;
    *p2=*p1;
    *p1=temp;
}
void main(){
    int a =10, b=20;
    int *pa=&a;
    int *pb=&b;
    printf("\nThe starting values:\t %d\t%d",a,b);
    swap(&a,&b);
    printf("\nThe swapped values:\t %d\t%d",a,b);
}