#include <stdio.h>
long factorial(int);
void main(){
    int n;

    printf("Enter a number to calculate its factorial\n");
    scanf("%d", &n);

    //printing
    printf("%d! = %ld\n", n, factorial(n));
}

long factorial(int n){
  int c;
  long r = 1;
    //calculating factorial
    for (c = 1; c <= n; c++)
        r *= c;
  return r;
}