#include <stdio.h>

int main(){

    int rem, rev = 0, n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    for(n; n != 0; n = n/10)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse of Number is : %d\n", rev);

    return 0;
}