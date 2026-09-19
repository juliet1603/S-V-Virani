#include <stdio.h>

int main(){

int a; printf("Enter first number : "); scanf("%d", &a);

int b; printf("Enter second number : "); scanf("%d", &b);

int add=a+b;  int sub=a-b;  int mult=a*b;  float div=a/b;  int mod=a%b;

printf("\n\nAddition : %d\n", add);
printf("Subtraction : %d\n", sub);
printf("Multiplication : %d\n", mult);
printf("Division : %.2f\n", div);
printf("Modulus : %d\n", mod);

return 0;
}