#include <stdio.h>

int main(){

    int year; printf("Enter a year: ");  scanf("%d", &year);

    int sum=year%4;

    printf("The year %d is Leap year ", year);

    return 0;
}