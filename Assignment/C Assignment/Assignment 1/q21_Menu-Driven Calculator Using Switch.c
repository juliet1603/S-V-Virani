#include <stdio.h>

int main() {

int a, b;
printf("Enter first number : ");
scanf("%d", &a);
printf("Enter second number : ");   
scanf("%d", &b);

int c;
printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n Enter your choice : ");
scanf("%d", &c);

switch (c)
{
case 1 :
printf("%d\n", a + b);
break;

case 2 :
printf("%d\n", a - b);
break;

case 3 :
printf("%d\n", a * b);
break;

case 4 :
printf("%d\n", a / b);
break;

default :
printf("Invalid choice\n");
}

    return 0;
}