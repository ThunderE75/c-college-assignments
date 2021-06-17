#include<stdio.h>
#include<stdlib.h>
void main(){ 
    int x = 48;
    int z = 5;
    printf("Initial Values are: \n");
    printf("X is %d\n",x);
    printf("Z is %d\n",z);
    printf("Adding 25 to x is : %d\n",x+25);
    printf("Dividing x by z is : %d\n",x/z);
    printf("Reminder left by dividing x by z is : %d\n",x%z);
    printf("Multyplying x by z is : %d\n",x*z);
    float a = 86.0;
    float b = 21.0;
    printf("A is %f\n",a);
    printf("B is %f\n",b);
    printf("Dividing a by b is : %f\n\n",a/b); 
    printf("ORDER OF OPERATIONS\n\n");
    int ans = 8 + 6 * 4;
    printf("Answer: %d",ans);
    // ORDER of Operations is similar to Java.
}