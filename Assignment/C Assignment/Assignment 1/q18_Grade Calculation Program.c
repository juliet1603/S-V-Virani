#include <stdio.h>

int main(){

int marks;
printf("Enter your marks(0-100) : ");
scanf("%d" , &marks);

if (marks >= 33 && marks <= 50)
{
    printf("Grade : C\n");
}

else if (marks > 50 && marks <=70)
{
    printf("Grade : B\n");
}

else if (marks > 70 && marks <= 90)
{
    printf("Grade : A\n");
}

else if (marks > 90 && marks <= 100)
{
    printf("Grade : A+\n");
}

else if (marks < 33 && marks >= 0)
{
    printf("You are fail\n");
}

else {
    printf("Please enter valid marks\n");
}

    return 0;
}