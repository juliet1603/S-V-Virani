#include <stdio.h>

int main() {

int a;  printf("Enter your number: ");  scanf("%d" ,&a);

int sum=a%2;
if(sum==0) printf("The number is even\n");
else printf("The number is odd\n");

    return 0;
}