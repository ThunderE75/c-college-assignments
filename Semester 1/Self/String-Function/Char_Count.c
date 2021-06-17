//t Count number of Vowels, Consonent, spaces and integer.
//* Refrence: https://www.programiz.com/c-programming/examples/vowel-consonant-frequency-string

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void main(){
    char arr[100];
    int vowels,consonant,space,integer;
    vowels=consonant=space=integer=0;

    printf("Enter a string with digits and spaces: \n");
    fgets(arr,sizeof(arr),stdin);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
            vowels++;
        else if (arr[i]>='a'&&arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z') //h or you could have used the function isalpha()
            consonant++;
        else if (arr[i]>='0'&&arr[i]<='9')
            integer++;
        else if (arr[i]==' ')
            space++;
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", integer);
    printf("\nWhite spaces: %d", space);
}



//h Output sample:
// Enter a line of string: 
// adfslkj34 34lkj343 34lk
// Vowels: 1
// Consonants: 11
// Digits: 9
// White spaces: 2