#include <stdio.h>

int main(){

    int from, till;

    printf("From where you want to start : ");
    scanf("%d", &from);

    printf("Where shoud we end : ");
    scanf("%d", &till);

    printf("The Even numbers are :\n");

    for (int i = from; i <= till; i++)
    {
        int j = i % 2;
        if (j == 0)
        {
            printf("%d ",i);
        }
        
    }

    printf("\n\nThe odd numbers are : \n");

    for (int i = from; i <= till; i++)
    {
        int j = i % 2; 
        if (j != 0)
        {
            printf("%d ",i);
        }
        
    }
    
    

    return 0;
}