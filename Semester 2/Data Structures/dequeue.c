#include<stdio.h>

int f = -1;             //x Use front as 0 and not -1 
int r = -1;
#define size 50
int arr[size];

void addrear (){
    int data;
    printf ("enter the data to be inserted\n");
    scanf ("%d", &data);
    if (r == 49)
        printf ("queue is full\n");
    else
        r = r + 1;
    arr[r] = data;
}
 
void addfront (){
    int data;
    printf ("enter the data to be inserted\n");
    scanf ("%d", &data);
    if (f == 0 && r == -1){
        r++;
        arr[f] = data;
    }
    else if (f != 0){
        f-=1;
        arr[f] = data;
    }
    else
      printf ("insertion is impossible");
}
void deletefront (){
  int dat1;
  if (f == 0 && r == -1)
    printf ("queue is underflow");
    else if (f == r){
        dat1 = arr[f];
        r == -1;
        f == 0;
    }
    else{
          dat1 = arr[f];
          f = f + 1;
    }
}
 
void deleterear ()
{
    int dat;
    if (f == 0 && r == -1)
        printf ("queue is underflow");
    else if (f == r){
        dat = arr[r];
        r == -1;
        f == 0;
    }
    else{
        dat = arr[r];
        r = r - 1;
    }
}

void main (){
int ch;
while (1){
    printf("press 1.for add rear\npress 2 for add front\npress 3 for delete front\npress 4 for delete rear");
    scanf ("%d", &ch);
    
    switch (ch){
        case 1: addrear ();
            break;
        case 2: addfront ();
            break;
        case 3: deletefront ();
            break;
        case 4: deleterear ();
            break;
        default:
            printf ("Enter the valid choice");
        }
    }
}