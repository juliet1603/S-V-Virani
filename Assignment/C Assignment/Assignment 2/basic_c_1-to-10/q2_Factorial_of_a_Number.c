#include <stdio.h>

int main(){
    double i , j, Fac=1;
    printf("Enter N Number : ");
    scanf("%lf", &j);

    for(i = 1; i <= j; i++)
    {
        Fac = Fac * i;
    }
    printf("Factorial of N numbers is : %.0lf", Fac);
    return 0;
}