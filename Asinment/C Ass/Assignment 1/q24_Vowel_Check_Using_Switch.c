#include <stdio.h>

int main(){

    char a;
    printf("Enter your charactor : ");
    scanf("%c" , &a);

    switch (a) {

        case 'a' :
        printf("\nCharactor is Vowel\n");
        break;

        case 'e':
        printf("\nCharactor is Vowel\n");
         break;

        case 'o' :
        printf("\nCharactor is Vowel\n");
         break;

        case 'i' :
        printf("\nCharactor is Vowel\n");
         break;

        case 'u' :
        printf("\nCharactor is Vowel\n");
         break;

        case 'A' :
        printf("\nCharactor is Vowel\n");
         break;

        case 'E':
        printf("\nCharactor is Vowel\n");
         break;

        case 'I' :
        printf("\nCharactor is Vowel\n");
         break;

        case 'O' :
        printf("\nCharactor is Vowel\n");
         break;
         
        case 'U' :
        printf("\nCharactor is Vowel\n");
         break;
         
        default : 
        printf("\nCharactor is not Vowel\n");

    }

    return 0;
}