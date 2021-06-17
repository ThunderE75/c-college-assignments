//t Que 17
//t Write a program to count the number of times an item is present in a linked list.
//* Refrence: https://www.sanfoundry.com/c-program-count-number-occurrences-element-linked-list-without-recursion/

#include <stdio.h>
#include <conio.h>
int occur(int[], int, int);
int main(){
    system("cls");
    int size, key, count;
    int list[20];
    int i;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Printing the list:\n");
    for (i = 0; i < size; i++)    {
        list[i] = rand() % size;
        printf("%d ", list[i]);
    }
    printf("\nEnter the key to find it's occurence: ");
    scanf("%d", &key);
    count = occur(list, size, key);
    printf("%d occurs for %d times.\n", key, count);
    return 0;
}

int occur(int list[], int size, int key){
    int i, count = 0;
    for (i = 0; i < size; i++){
        if (list[i] == key){
            count += 1;
        }
    }
    return count;
}