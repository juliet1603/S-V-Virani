//A=pi (r*r)

#include <stdio.h>
#include <math.h>
int main (){

double r; printf("Enter radius of Circle : ");  scanf("%lf" , &r);

double rr=r*r;          double area=3.14*rr;  


printf("\nArea of Circle : %.2lf\n\n", area);

double C=2*3.14*r;   printf("Circumference of Circle : %.2lf\n\n" , C);

    return 0;
}