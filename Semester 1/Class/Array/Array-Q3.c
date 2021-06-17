//t Program to find Smallest and largest values in an array
#include<stdio.h>
#include<stdlib.h>
void main(){
    int arr[10]={52,69,42,38,26,42,15,6,32,12};
    int max,min;
    max=min=arr[0];
    
    for(int i=0;i<10;i++){          //Finding smallest via Linear Search
        // if (arr[i]<min)
        //     min=arr[i];
    }

    for (int j = 0; j < 10; j++)    //Finding Largest via Linear Search
    {
        if(arr[j]>max)
            max=arr[j];
    }

    // printf("The largest number is: %d\n",max);
    printf("The smallest number is: %d\n",min);    

}