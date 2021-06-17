//t check if the number is prime or not.

#include <stdio.h>
int main(){
    int n,i,flag=0;
    printf("Enter a number:\t");
    scanf ("%d",&n);
    for (i = 2; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }   
                
    }
    if (n==1)
    {
        printf("%d is neither a prime number or a composite number.",n);
    }
    else
    {
        if (flag==0)
            printf("%d is a prime number.",n);
        else
            printf("%d is not a prime number.",n);
    }
    return 0;
    
}