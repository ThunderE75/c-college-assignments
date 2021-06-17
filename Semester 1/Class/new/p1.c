//t Program to find if a string is PALINDROME or not
#include <string.h>
 
void main()
{
    int i,c=0,n;
    char string[100];  
    printf("Enter  the string: ");
    gets(string);
    n=strlen(string);

    for(int i=0;i<n/2;i++)  
    {
    	if (string[i]==string[n-i-1])
            c++;
 	}
 	if(c==n/2)
        printf("String is PALINDROME\n\n");
    else
        printf("String is NOT PALINDROME\n\n");     
}