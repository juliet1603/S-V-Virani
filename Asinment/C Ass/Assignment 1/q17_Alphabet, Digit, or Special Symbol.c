#include <stdio.h>

int main(){

char ch;  

printf("Enter your charactor : ");  
scanf("%c" , &ch);

if ((ch >= 'a' && ch<= 'z' ) || (ch >= 'A'  && ch <= 'Z'))
{
    printf("The charactor is an Alphabet\n");
}

else if (ch <='0' || ch <= '9')
{
    printf("The charactor is a Digit\n");
}

else {printf("The charactor is Symbol\n");}

    return 0;
}