#include <stdio.h>

int main() {

int a, b;
printf("Enter 1st number: ");
scanf("%d", &a);
printf("Enter 2nd number: ");
scanf("%d", &b);

int Gr = (a > b) ? a : b;
printf("Greater number is : %d", Gr);
return 0;
}