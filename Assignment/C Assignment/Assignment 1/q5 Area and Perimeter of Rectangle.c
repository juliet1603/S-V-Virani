// A = L*W    P=2*(L+W)

#include <stdio.h>

int main(){

    int l; printf("Enter length : "); scanf("%d", &l);
    int w; printf("Enter width : "); scanf("%d", &w);

int A=l*w; int P=2*(l+w);


    printf("Area of Rectangle is : %d\n\n", A);
    printf("Perimeter of Rectangle is : %d\n", P);

    return 0;
}