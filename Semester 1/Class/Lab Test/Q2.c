//t 10 numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, 
//t how many are negative, how many are even and how many odd.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int arr[10],even,odd,pos,neg;
    even=odd=pos=neg=0;
    printf("Enter 10 digits:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int j = 0; j < 10; j++)
    {
        if (arr[j]>0)
            pos++;
        else if (arr[j]<0)
            neg++;
        if (arr[j]%2==0)
            even++;
        else
            odd++;
    }
    printf("The Frequency are:\n");
    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);
    printf("Negetive = %d\n",neg);
    printf("Positive = %d\n",pos);
}