#include <stdio.h>

int main(){

    int n1 , n2 , temp;

    printf ("Enter first numbers : ");
    scanf("%d", &n1);
    printf ("Enter Second numbers : ");
    scanf("%d", &n2);

    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    
    printf("GCD is : %d", n1);

    return 0;
}