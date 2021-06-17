//t check if the first 20 numbers are prime or not.

#include <stdio.h>

int main() {
   int low=1, high=20, i, prime;
   printf("Prime numbers from %d to %d are: \n", low, high);
   while (low < high) {
      prime = 0;
      if (low <= 1) {
         ++low;
         continue;
      }
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            prime = 1;
            break;
         }
      }
      if (prime == 0)
         printf("%d\n", low);
      ++low;
   }
   return 0;
}