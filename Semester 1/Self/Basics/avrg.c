//t A program that finds avrage between x amount of variables.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int avg=0,size=0;
    printf("Enter the Number of variables that you want to find the avrage of: \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d Elements\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        avg+=arr[i];
    }
    avg=avg/size;

    printf("Avrage= %d",avg);
}