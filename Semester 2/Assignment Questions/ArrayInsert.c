#include <stdio.h>
#include <conio.h>
int main()
{
    int array[100], position, c, n, value;
    system("cls");
    printf("\nEnter number of elements in array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\nEnter the location where you wish to insert an element ");
    scanf("%d", &position);

    printf("\nEnter the value to insert ");
    scanf("%d", &value);

    for (c = n - 1; c >= position - 1; c--)
        array[c+1] = array[c];

    array[position-1] = value;

    printf("\nResultant array is \n");

    for (c = 0; c <= n; c++)
        printf("%d\n", array[c]);

    return 0;
}
