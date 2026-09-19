#include <stdio.h>

int main(){

    int i , j , k;
    printf("Which table you want : ");
    scanf("%d",&k);

    for(i = 1; i <= 10; i = i+1)
    {
        j = i * k;
        printf("\n%d * %d = %d", k , i , j);
    }
     printf("\n\n");


    return 0;
}