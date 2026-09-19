// voting
#include <stdio.h>

int main() {
    int age;
    
    printf("enter your age : ");    scanf("%d", &age);
    
     if (age>18){
         printf("you are eligible for voting\n");
     }
    else if  (age<=0){
         printf ("please enter velid number");
    }
 
    else  {printf("you are not eligible ");}
    return 0;
}