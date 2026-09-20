#include <stdio.h>

int main(){

int a , b , c; 

 printf("Eter first number : "); scanf("%d" ,&a);
 printf("Eter second number : "); scanf("%d" ,&b);

 c=a;  a=b;  b=c; 

 printf("Swaped : \n\n");

printf("First number : %d\n", a);  printf("Second number : %d\n", b); 

    return 0;
}