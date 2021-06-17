//t Program to Delete an element from array based on value
//* Refrence: https://www.studytonight.com/c/programs/array/deleting-an-element-from-array

#include <stdio.h>
#include <conio.h>
int main(){
    int array[10], element, c, n, pos;
    int found = 0;
    system("cls");
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nThe input array is: ");
    for (c = 0; c < n; c++)
        printf("%d ", array[c]);

    printf("\n\nEnter the element to be deleted: ");
    scanf("%d", &element);

    // check the element to be deleted is in array or not
    for (c = 0; c < n; c++)
    {
        if (array[c] == element)
        {
            found = 1;
            pos = c;
            break; // terminate the loop
        }
    }
    if (found == 1) // the element to be deleted exists in the array
    {
        for (c = pos; c < n - 1; c++)
            array[c] = array[c + 1];
    }
    else
        printf("\n\nElement %d is not found in the array\n\n", element);

    printf("\n\nResultant array is: ");
    
    for (c = 0; c < n - 1; c++)
        printf("%d  ", array[c]);

    return 0;
}