// multiply the temperature by 9/5 (or 1.8) and then add 32

#include <stdio.h>

int main(){

    double c; printf("Enter Celsius : "); scanf("%lf", &c);

double f=(c*1.8)+32;  printf("\nFahrenheit is : %.2lf\n\n", f);

    return 0;
}