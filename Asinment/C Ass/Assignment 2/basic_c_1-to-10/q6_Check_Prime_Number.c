#include <stdio.h>

int main(){

    int i , n , count = 0;

    printf("Enter a Number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            count++;
        }
        
    }

    if (count == 2)
    {
        printf("The Number is Prime");
    }else
    printf("The Number is not Prime");
    

    return 0;
}