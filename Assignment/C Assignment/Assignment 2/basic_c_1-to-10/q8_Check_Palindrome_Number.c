#include <stdio.h>

int main(){

    int n , remainder , revesed = 0 , orignal;
    
    printf("Enter a number : ");
    scanf("%d", &n);

    orignal = n;

    while (n != 0)
    {
        remainder = n % 10;
        revesed = revesed * 10 + remainder;
        n = n/10;
    }

    if (orignal == revesed)
    {
        printf("The Number is Palindrome\n");
    }else
    {
        printf("The Number is not Palindrome\n");
    }
    
    
    return 0;
}