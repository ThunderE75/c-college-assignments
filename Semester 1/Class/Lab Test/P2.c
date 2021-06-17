//t Question 2: Fibonacci Series 
//Dec 17, 2020
#include<stdio.h>
void printFibonacci(int n);

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Fibonacci Series till %d: \n",n);
    printf("%d %d ",0,1);
    printFibonacci(n-2);
  return 0;
}

void printFibonacci(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         printFibonacci(n-1);
    }
}