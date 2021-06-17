//t C Program to sort an array using Heap Sort technique
//* Refrence: https://www.sanfoundry.com/c-program-implement-heap-sort/

#include <stdio.h>
#include <conio.h>
void main(){
    system("cls");
    int size, i, j, c, root, temp;

    printf("\nEnter the size of the list: ");
    scanf("%d", &size);
    int heap[size];

    printf("\nEnter the elements: \n");
    for (i = 0; i < size; i++){
        printf("Enter an element(%d/%d): ",i+1,size);
        scanf("%d", &heap[i]);
    }
    for (i = 1; i < size; i++){
        c = i;
        do{
            root = (c - 1) / 2;             
            if (heap[root] < heap[c])   /* to create MAX heap array */{
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;
        } while (c != 0);
    }

    printf("Unsorted array:\t");

    for (i = 0; i < size; i++)

        printf("%d ", heap[i]);

    for (j = size - 1; j >= 0; j--){
        temp = heap[0];
        heap[0] = heap[j];    /* swap max element with rightmost leaf element */
        heap[j] = temp;
        root = 0;
        do{
            c = 2 * root + 1;    /* left node of root element */
            if ((heap[c] < heap[c + 1]) && c < j-1)
                c++;

            if (heap[root]<heap[c] && c<j){    /* again rearrange to max heap array */
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        } while (c < j);
    }
    printf("\nHeap Sorted:\t");
    for (i = 0; i < size; i++)
       printf("%d ", heap[i]);
}