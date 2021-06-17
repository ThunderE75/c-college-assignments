//t trying to use Heap
//* Refrence: https://www.youtube.com/watch?v=gWppLYaCICM&list=PL6gx4Cwl9DGAKIXv8Yr6nhGJ9Vlcjyymq&index=48&ab_channel=thenewboston
#include<stdio.h>
#include<stdlib.h>

void main(){
    int howMany,total=0;
    int *pArray;
    float avg;
    printf("Enter how many numbers you want to enter to find the avrage:\n");
    scanf("%d",&howMany);

    //h Malloc is used to create heap.
    //     (int *) <== integer pointer typecasting
    pArray=(int *) malloc(howMany*sizeof(int));
    //_                   how may <== number of items requed to store in heap, basically similar to array_size.
    //_                         sizeof(int) <== it's the data type so 4 bytes are alloted for each item        


    printf("Enter %d numbers: \n",howMany);
    
    //pointes in a heap works exactly as predetermined array
    for (int i = 0; i < howMany; i++){
        scanf("%d",&pArray[i]);
        total+=pArray[i];
    }
    
    printf("Total: %d\n",total);
    avg=(float)total/(float)howMany;
    printf("Avrage is equal to: %.2f",avg);
    
    //h This is used to clear the borrowed memory after use
    // inside the brackets are the name of the variable that was stored in the heao=p
    free(pArray);
    
}