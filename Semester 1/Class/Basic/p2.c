//t Exponent using function
#include <stdio.h>

int exponent(int x, int y){
    int ans=1;
    while (y != 0) {
        ans *= x;
        --y;
    }
    return ans;
}
void main() {
    int base, exp;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    printf("Answer = %d", exponent(base,exp));
}