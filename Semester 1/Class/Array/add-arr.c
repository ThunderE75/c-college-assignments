//t Adding the elements of the array.

#include<stdio.h>

int add(int arr[]){
    int sum=0;
    for (int i = 0; i < 10; i++){
        sum+=arr[i];
    }
    return sum;
}
void main(){
    int arr[10];
    printf("Enter 10 Elements to store it in an array\n");
    for (int i = 0; i < 10; i++)
        scanf("%d",&arr[i]);

    printf("The sum of the elements of this array is: %d",add(arr));
}
