//t Program to Study Structures
#include<stdio.h>
#include<string.h>

// Define a structure that can describe a hotel. It should have members that include the name, address,
// grade, room charge and number of rooms. Write functions to perform
// i. to print out hotels of a given grade
// ii. to print out hotels with rooms charges less than a given value.

struct hotel{
    char Name[30];
    char add[100];
    int grade;
    int roomCharge;
    int no_of_rooms;
};

void printhotel( struct hotel hotelinst ) {

   printf( "Hotel Name: %s\n", hotelinst.Name);
   printf( "Hotel Location: %s\n", hotelinst.add);
   printf( "Hotel Grade: %d\n", hotelinst.grade);
   printf( "Rooms Avaliable: %d\n", hotelinst.no_of_rooms);
   printf( "Rooms Price: %d\n\n", hotelinst.roomCharge);

}
void main(){
    int budget;
    int req_grade;
    int results=0;
    struct hotel h1;
    struct hotel h2;

    //Saving info about Hotel 1
    strcpy(h1.Name,"Frst Hotel");
    strcpy(h1.add,"Delhi");
    h1.grade=2;
    h1.roomCharge=2000;
    h1.no_of_rooms=5;

    //Saving info about Hotel 2
    strcpy(h2.Name,"Second Hotel");
    strcpy(h2.add,"Lucknow");
    h2.grade=4;
    h2.roomCharge=2800;
    h2.no_of_rooms=8;

    //_ Taking the Search
    printf("Enter your Budget: ");
    scanf("%d",&budget);
    printf("Enter the grade of hotel you want: ");
    scanf("%d",&req_grade);
    printf("\nYour budget: %d", budget);
    printf("\nRequired Grade: %d", req_grade );
    printf("\nSearching...\n\n");

    if(budget>h1.roomCharge&&req_grade<=h1.grade){
        printhotel(h1);
        results++;
    }

    if(budget>h2.roomCharge&&req_grade<=h2.grade){
        printhotel(h2);
        results++;
    }

    printf("\nTotal results found: %d", results);
    if (results==0)
    {
        printf("\nNo Hotel found!");
    }

}
